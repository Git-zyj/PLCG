#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)1960;
unsigned short var_5 = (unsigned short)8394;
signed char var_7 = (signed char)23;
unsigned long long int var_8 = 8079020422108716182ULL;
unsigned char var_10 = (unsigned char)0;
int zero = 0;
unsigned int var_11 = 3379913926U;
unsigned long long int var_12 = 17918852264679124917ULL;
long long int var_13 = 3790893043249942263LL;
long long int var_14 = 7346401198099587190LL;
long long int var_15 = 7146757187069322885LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
