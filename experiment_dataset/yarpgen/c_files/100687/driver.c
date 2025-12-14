#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49921;
unsigned int var_5 = 2831494491U;
short var_10 = (short)-6224;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-8603;
int var_15 = 1133698170;
int zero = 0;
unsigned long long int var_16 = 3309403522870048106ULL;
long long int var_17 = -4364303602624589955LL;
unsigned int var_18 = 3461724688U;
void init() {
}

void checksum() {
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
