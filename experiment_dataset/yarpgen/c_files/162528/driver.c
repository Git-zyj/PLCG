#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2441914225479517237ULL;
int var_3 = -716987846;
signed char var_5 = (signed char)-107;
unsigned long long int var_6 = 255088398384259364ULL;
unsigned int var_7 = 2593958192U;
unsigned long long int var_8 = 4034412684934989016ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)237;
signed char var_16 = (signed char)-16;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
