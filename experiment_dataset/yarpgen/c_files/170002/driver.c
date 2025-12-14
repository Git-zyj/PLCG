#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)110;
unsigned short var_5 = (unsigned short)54255;
signed char var_9 = (signed char)-8;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned long long int var_17 = 13033410829530503652ULL;
int zero = 0;
int var_18 = -1797917412;
signed char var_19 = (signed char)125;
unsigned short var_20 = (unsigned short)22730;
void init() {
}

void checksum() {
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
