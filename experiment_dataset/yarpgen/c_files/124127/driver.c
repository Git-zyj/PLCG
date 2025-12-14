#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = -2244350204184386250LL;
short var_4 = (short)-13265;
long long int var_7 = -8780422777797683490LL;
unsigned long long int var_8 = 12976280402233563406ULL;
long long int var_12 = 6960914666952024310LL;
int zero = 0;
unsigned char var_14 = (unsigned char)83;
unsigned short var_15 = (unsigned short)9345;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
