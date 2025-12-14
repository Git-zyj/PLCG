#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15023030167757953714ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
int var_9 = -1530039848;
unsigned char var_11 = (unsigned char)125;
int var_16 = -767495570;
int zero = 0;
unsigned char var_17 = (unsigned char)135;
unsigned short var_18 = (unsigned short)63291;
int var_19 = -1303145632;
long long int var_20 = 750884110843760549LL;
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
