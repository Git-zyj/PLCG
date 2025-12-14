#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 153265953U;
unsigned int var_3 = 4174181855U;
unsigned char var_8 = (unsigned char)57;
signed char var_11 = (signed char)49;
long long int var_12 = -134719676063818344LL;
int var_15 = 79411705;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -1325199861;
unsigned short var_18 = (unsigned short)28783;
signed char var_19 = (signed char)90;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
