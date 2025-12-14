#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3083670192U;
signed char var_3 = (signed char)-89;
signed char var_4 = (signed char)20;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 1702126715U;
signed char var_8 = (signed char)76;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)93;
signed char var_11 = (signed char)-9;
signed char var_12 = (signed char)61;
unsigned int var_13 = 4057912062U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
