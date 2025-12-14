#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 997903038;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
int var_7 = -354153870;
unsigned char var_10 = (unsigned char)80;
long long int var_12 = -1597311314111795741LL;
long long int var_13 = 5093048692076761882LL;
unsigned short var_15 = (unsigned short)45381;
int zero = 0;
int var_17 = 1373598005;
_Bool var_18 = (_Bool)1;
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
