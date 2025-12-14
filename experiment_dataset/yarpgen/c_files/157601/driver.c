#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3723136441949292544LL;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3350661760U;
_Bool var_9 = (_Bool)1;
short var_14 = (short)-476;
int zero = 0;
unsigned char var_15 = (unsigned char)78;
long long int var_16 = -6551915727189963409LL;
unsigned char var_17 = (unsigned char)174;
unsigned char var_18 = (unsigned char)72;
void init() {
}

void checksum() {
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
