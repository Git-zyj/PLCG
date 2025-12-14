#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 8693477906747674573LL;
_Bool var_4 = (_Bool)1;
long long int var_5 = -3617852127000125704LL;
int var_7 = -1371711459;
short var_8 = (short)457;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)40;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 562465483U;
int var_18 = 64904657;
int var_19 = 1211514080;
signed char var_20 = (signed char)-115;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
