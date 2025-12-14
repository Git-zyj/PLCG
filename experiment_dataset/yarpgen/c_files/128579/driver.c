#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17672551560361472382ULL;
unsigned long long int var_2 = 3407861605895491888ULL;
int var_5 = 1850841491;
unsigned long long int var_8 = 5302211937809064989ULL;
int zero = 0;
int var_12 = -1414845599;
unsigned long long int var_13 = 5785896048280422003ULL;
signed char var_14 = (signed char)-124;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
