#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -947312913;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
short var_7 = (short)-15777;
unsigned char var_8 = (unsigned char)206;
long long int var_11 = 3021155478457791316LL;
int var_12 = 866935184;
int zero = 0;
signed char var_14 = (signed char)-67;
unsigned char var_15 = (unsigned char)210;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
