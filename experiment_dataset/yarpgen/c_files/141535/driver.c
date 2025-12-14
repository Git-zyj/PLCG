#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3612785677U;
unsigned short var_3 = (unsigned short)26411;
signed char var_4 = (signed char)-72;
int var_5 = 599122474;
int var_6 = -1558057482;
unsigned long long int var_8 = 921101866129623652ULL;
int zero = 0;
unsigned int var_14 = 3825557795U;
unsigned short var_15 = (unsigned short)22887;
unsigned long long int var_16 = 9708291187280653215ULL;
unsigned short var_17 = (unsigned short)59356;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
