#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17616;
signed char var_4 = (signed char)-75;
signed char var_6 = (signed char)-78;
unsigned short var_9 = (unsigned short)7448;
long long int var_15 = -3633319624590010832LL;
signed char var_16 = (signed char)66;
int zero = 0;
unsigned char var_18 = (unsigned char)243;
long long int var_19 = 9184582911766169442LL;
int var_20 = -1894929179;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
