#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)2;
int var_2 = 730556945;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 9141397149873064957ULL;
signed char var_8 = (signed char)76;
unsigned short var_15 = (unsigned short)9503;
unsigned char var_17 = (unsigned char)253;
int zero = 0;
int var_18 = 1619597238;
_Bool var_19 = (_Bool)0;
int var_20 = -1960671402;
void init() {
}

void checksum() {
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
