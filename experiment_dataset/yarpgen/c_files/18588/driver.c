#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1133039904137911997ULL;
long long int var_3 = -7442373020153123556LL;
long long int var_4 = 5664696236497793328LL;
long long int var_6 = 6039047753532304024LL;
unsigned short var_7 = (unsigned short)55726;
unsigned short var_8 = (unsigned short)43460;
unsigned char var_9 = (unsigned char)36;
int zero = 0;
signed char var_10 = (signed char)-109;
unsigned char var_11 = (unsigned char)8;
signed char var_12 = (signed char)-120;
unsigned int var_13 = 17257697U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
