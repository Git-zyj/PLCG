#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14559939301006406956ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_12 = 7565604965744866881ULL;
unsigned short var_13 = (unsigned short)46143;
int zero = 0;
long long int var_15 = -209775344742089500LL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)50120;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
