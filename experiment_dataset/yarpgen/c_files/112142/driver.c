#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10140160359646678012ULL;
signed char var_5 = (signed char)118;
unsigned short var_10 = (unsigned short)19645;
unsigned int var_11 = 515615117U;
unsigned long long int var_12 = 8572869260826430526ULL;
unsigned int var_13 = 641519082U;
unsigned long long int var_14 = 4377175165435535552ULL;
signed char var_15 = (signed char)47;
int zero = 0;
long long int var_20 = 3231536663826980420LL;
short var_21 = (short)-11698;
unsigned int var_22 = 2702489409U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
