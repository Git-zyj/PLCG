#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)196;
unsigned char var_16 = (unsigned char)66;
unsigned char var_18 = (unsigned char)224;
int zero = 0;
unsigned long long int var_19 = 9335126993860872868ULL;
short var_20 = (short)-1031;
unsigned char var_21 = (unsigned char)217;
unsigned long long int var_22 = 14970130904831844197ULL;
unsigned char var_23 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
