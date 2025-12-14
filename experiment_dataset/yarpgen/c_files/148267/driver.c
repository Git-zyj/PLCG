#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)25814;
_Bool var_4 = (_Bool)0;
long long int var_6 = 4926777970172861398LL;
unsigned int var_7 = 2656909778U;
unsigned int var_11 = 1975847744U;
unsigned int var_18 = 3672215336U;
int zero = 0;
unsigned short var_19 = (unsigned short)26921;
unsigned long long int var_20 = 4944342346151604608ULL;
unsigned int var_21 = 82998079U;
short var_22 = (short)20138;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
