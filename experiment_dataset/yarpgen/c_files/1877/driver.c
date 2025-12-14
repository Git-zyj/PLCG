#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_4 = -5346284959153809680LL;
unsigned short var_5 = (unsigned short)4735;
int var_6 = -1391930404;
unsigned int var_7 = 2530943326U;
unsigned int var_8 = 2073430933U;
unsigned long long int var_9 = 6634855888482929931ULL;
short var_10 = (short)-8407;
int zero = 0;
int var_11 = -835243422;
short var_12 = (short)203;
unsigned long long int var_13 = 8074428689165652312ULL;
long long int var_14 = 2045211818319513916LL;
void init() {
}

void checksum() {
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
