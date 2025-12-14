#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = -6248630829457991366LL;
signed char var_6 = (signed char)-78;
signed char var_8 = (signed char)108;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)4250;
unsigned long long int var_12 = 10189157468231250527ULL;
unsigned int var_13 = 806196485U;
int zero = 0;
unsigned long long int var_14 = 6547310008094632468ULL;
long long int var_15 = -2419866415847564689LL;
int var_16 = 637159994;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
