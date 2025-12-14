#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)245;
long long int var_4 = 5729642619991590713LL;
signed char var_7 = (signed char)80;
long long int var_8 = -2874648393510402529LL;
int zero = 0;
short var_12 = (short)30263;
signed char var_13 = (signed char)119;
unsigned short var_14 = (unsigned short)53504;
unsigned short var_15 = (unsigned short)63460;
_Bool var_16 = (_Bool)1;
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
