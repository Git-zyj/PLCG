#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)23;
_Bool var_4 = (_Bool)0;
int var_5 = -1974694029;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_16 = 6576734060011479948LL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)27429;
unsigned long long int var_19 = 16464889879330379182ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
