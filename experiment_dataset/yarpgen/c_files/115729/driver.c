#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4893023116570927476LL;
unsigned short var_4 = (unsigned short)63465;
_Bool var_6 = (_Bool)0;
unsigned short var_10 = (unsigned short)29728;
_Bool var_12 = (_Bool)1;
int var_13 = -1774453496;
long long int var_14 = -1999567111214806079LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 5084626007406294311LL;
_Bool var_19 = (_Bool)1;
long long int var_20 = -1874145609774428031LL;
unsigned short var_21 = (unsigned short)30228;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
