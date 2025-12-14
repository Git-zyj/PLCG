#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_11 = 1231667261518719848LL;
unsigned long long int var_13 = 14651136241373903579ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)94;
unsigned int var_17 = 3610351838U;
short var_18 = (short)-11866;
void init() {
}

void checksum() {
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
