#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)31392;
_Bool var_3 = (_Bool)0;
long long int var_4 = 1276693545141236155LL;
int var_5 = -1810093467;
_Bool var_6 = (_Bool)0;
int var_10 = -1850097257;
int zero = 0;
int var_12 = -1060795847;
int var_13 = 1645272245;
void init() {
}

void checksum() {
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
