#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 340943696;
unsigned int var_4 = 1098447485U;
unsigned long long int var_5 = 6838857271737701103ULL;
unsigned int var_6 = 3099822902U;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)21314;
int zero = 0;
unsigned long long int var_13 = 16826038759014601234ULL;
int var_14 = -1240909780;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
