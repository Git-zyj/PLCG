#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 976128580U;
unsigned int var_5 = 4067321842U;
unsigned int var_7 = 3970481304U;
unsigned char var_11 = (unsigned char)33;
unsigned char var_13 = (unsigned char)77;
long long int var_14 = 8624845845249555459LL;
int zero = 0;
long long int var_16 = 7742850158236017426LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
