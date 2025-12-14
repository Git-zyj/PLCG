#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1913299288U;
int var_3 = 1082083476;
unsigned long long int var_5 = 11971177163361288526ULL;
unsigned int var_9 = 2902384567U;
unsigned long long int var_12 = 13333456584144086249ULL;
int var_13 = 1668207793;
unsigned int var_14 = 1449574294U;
int var_15 = 1068472744;
int zero = 0;
unsigned long long int var_16 = 7541790682550558468ULL;
signed char var_17 = (signed char)115;
short var_18 = (short)-24607;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
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
