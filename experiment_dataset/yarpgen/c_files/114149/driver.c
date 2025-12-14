#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)72;
unsigned long long int var_1 = 15307779994190475401ULL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
int var_8 = -1745322440;
int zero = 0;
int var_12 = -270184447;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)10157;
signed char var_15 = (signed char)-43;
unsigned long long int var_16 = 9383541541210072222ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
