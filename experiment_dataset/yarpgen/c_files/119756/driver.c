#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
unsigned char var_3 = (unsigned char)13;
long long int var_5 = 3487931242274292759LL;
unsigned long long int var_7 = 10137274976355811888ULL;
signed char var_8 = (signed char)98;
long long int var_9 = 5483604249567686460LL;
short var_14 = (short)-25244;
unsigned long long int var_15 = 6802073472512278763ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_17 = (short)-26735;
short var_18 = (short)7761;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
