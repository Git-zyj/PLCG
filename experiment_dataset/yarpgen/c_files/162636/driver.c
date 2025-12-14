#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1884797637U;
unsigned short var_3 = (unsigned short)40702;
int var_4 = 1276087047;
unsigned short var_5 = (unsigned short)31885;
int var_6 = -314545573;
int zero = 0;
short var_11 = (short)-11095;
short var_12 = (short)14952;
unsigned long long int var_13 = 10795586093301894120ULL;
signed char var_14 = (signed char)41;
unsigned int var_15 = 4214087732U;
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
