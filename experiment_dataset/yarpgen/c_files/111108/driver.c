#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1826571784U;
unsigned long long int var_3 = 12392597622671672124ULL;
signed char var_5 = (signed char)0;
unsigned char var_8 = (unsigned char)159;
unsigned int var_9 = 4238561660U;
int zero = 0;
long long int var_15 = 641397321661345035LL;
unsigned long long int var_16 = 14515741822452616262ULL;
unsigned int var_17 = 2620129774U;
unsigned long long int var_18 = 4412889330787207627ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
