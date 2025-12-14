#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 128043318014178354ULL;
int var_5 = -938610514;
unsigned long long int var_7 = 9433786378791763190ULL;
short var_13 = (short)19031;
int zero = 0;
unsigned short var_16 = (unsigned short)24080;
unsigned int var_17 = 1942565801U;
long long int var_18 = -2065891406055449817LL;
int var_19 = 1500633899;
signed char var_20 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
