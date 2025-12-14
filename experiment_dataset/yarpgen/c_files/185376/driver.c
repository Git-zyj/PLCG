#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17505013548316547352ULL;
long long int var_1 = 9168062535524922363LL;
unsigned long long int var_3 = 6775976241328758998ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1340438193U;
long long int var_7 = -1434204943562367980LL;
short var_8 = (short)17197;
unsigned int var_9 = 3485986332U;
int zero = 0;
signed char var_10 = (signed char)-18;
int var_11 = -2111189199;
long long int var_12 = -8170238069956085601LL;
unsigned char var_13 = (unsigned char)244;
signed char var_14 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
