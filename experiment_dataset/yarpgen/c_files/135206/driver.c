#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)24557;
long long int var_6 = 2872296889528390693LL;
_Bool var_7 = (_Bool)0;
unsigned short var_14 = (unsigned short)15364;
int zero = 0;
int var_19 = 419400267;
int var_20 = -1671642598;
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
