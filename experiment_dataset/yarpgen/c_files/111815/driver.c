#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25510;
unsigned short var_2 = (unsigned short)54057;
short var_11 = (short)11727;
int zero = 0;
short var_17 = (short)-14586;
signed char var_18 = (signed char)-23;
unsigned long long int var_19 = 16079425175206106590ULL;
unsigned char var_20 = (unsigned char)78;
signed char var_21 = (signed char)-107;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
