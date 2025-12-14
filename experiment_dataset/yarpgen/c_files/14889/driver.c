#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2666749566043936043LL;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2309633798U;
unsigned short var_7 = (unsigned short)5272;
long long int var_8 = -8572743598656450396LL;
long long int var_9 = -4022169036117925675LL;
short var_12 = (short)-24913;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 16791177294297007427ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
