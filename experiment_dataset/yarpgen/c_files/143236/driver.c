#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-25765;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)49675;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 867669164610329305LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
