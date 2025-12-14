#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15314471312573396800ULL;
signed char var_1 = (signed char)59;
int var_3 = 2106897999;
long long int var_7 = -6713283694244391967LL;
unsigned int var_15 = 1484521527U;
int zero = 0;
unsigned char var_19 = (unsigned char)208;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
