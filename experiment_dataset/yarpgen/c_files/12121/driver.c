#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13779699520330536044ULL;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 3524706999U;
signed char var_11 = (signed char)82;
unsigned int var_12 = 2649404583U;
int zero = 0;
unsigned long long int var_16 = 9684529177499877709ULL;
signed char var_17 = (signed char)2;
short var_18 = (short)-17708;
unsigned long long int var_19 = 17955188064212435450ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
