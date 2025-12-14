#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12033706306783814133ULL;
unsigned char var_5 = (unsigned char)171;
unsigned short var_8 = (unsigned short)5639;
unsigned short var_11 = (unsigned short)30758;
int zero = 0;
long long int var_14 = -86222531099920888LL;
long long int var_15 = -8349423049713125290LL;
long long int var_16 = 5914938447537720250LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
