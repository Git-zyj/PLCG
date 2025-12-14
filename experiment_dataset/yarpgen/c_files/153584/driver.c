#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9066526281868257077ULL;
unsigned long long int var_2 = 8569749351022956640ULL;
unsigned int var_3 = 2995541250U;
unsigned long long int var_11 = 4426872840939656758ULL;
int zero = 0;
int var_17 = 682604579;
unsigned long long int var_18 = 4983552459036611469ULL;
unsigned int var_19 = 931526770U;
void init() {
}

void checksum() {
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
