#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -19170360;
int var_1 = 326885433;
long long int var_2 = -6879523121219523601LL;
int var_3 = -1847189239;
_Bool var_5 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)213;
long long int var_13 = 8818318279966511713LL;
int zero = 0;
unsigned char var_14 = (unsigned char)128;
unsigned short var_15 = (unsigned short)49151;
unsigned long long int var_16 = 15927619737445689900ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
