#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)222;
short var_6 = (short)3940;
unsigned short var_7 = (unsigned short)44245;
int var_8 = 886077470;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)30;
int var_13 = -1175574827;
int zero = 0;
short var_14 = (short)23251;
signed char var_15 = (signed char)-49;
long long int var_16 = -5396789476695246305LL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-53;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
