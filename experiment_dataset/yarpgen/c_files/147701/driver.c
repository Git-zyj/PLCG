#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
unsigned char var_1 = (unsigned char)177;
unsigned char var_2 = (unsigned char)91;
unsigned char var_3 = (unsigned char)34;
unsigned int var_4 = 1507438074U;
unsigned char var_5 = (unsigned char)127;
unsigned char var_8 = (unsigned char)219;
unsigned long long int var_9 = 4037700273510446518ULL;
unsigned char var_10 = (unsigned char)219;
unsigned char var_13 = (unsigned char)110;
unsigned char var_16 = (unsigned char)237;
int zero = 0;
unsigned char var_17 = (unsigned char)222;
unsigned char var_18 = (unsigned char)147;
unsigned char var_19 = (unsigned char)45;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
