#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2661444243U;
long long int var_3 = -4230881882782631630LL;
int var_4 = 427019608;
long long int var_5 = 8935082930955085861LL;
long long int var_6 = 4274527092114165948LL;
unsigned short var_7 = (unsigned short)6765;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2732090449U;
int var_12 = -759459868;
signed char var_13 = (signed char)-115;
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
