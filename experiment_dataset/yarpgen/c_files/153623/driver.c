#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
int var_1 = 1506675820;
long long int var_2 = 5014889295891826253LL;
signed char var_3 = (signed char)33;
unsigned char var_6 = (unsigned char)66;
unsigned int var_12 = 813946732U;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_16 = -512181278;
signed char var_17 = (signed char)66;
signed char var_18 = (signed char)50;
short var_19 = (short)1813;
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
