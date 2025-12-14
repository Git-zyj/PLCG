#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4270247414U;
unsigned short var_4 = (unsigned short)47078;
unsigned int var_6 = 2533085369U;
unsigned int var_9 = 2460521027U;
unsigned int var_10 = 53431701U;
unsigned int var_14 = 1692732530U;
unsigned int var_15 = 1278605189U;
int zero = 0;
unsigned int var_17 = 1068257555U;
unsigned short var_18 = (unsigned short)49269;
unsigned short var_19 = (unsigned short)42164;
unsigned int var_20 = 2730843111U;
void init() {
}

void checksum() {
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
