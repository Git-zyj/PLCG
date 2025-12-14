#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_8 = 344170977U;
unsigned long long int var_9 = 5088836966070549863ULL;
short var_12 = (short)27959;
int zero = 0;
long long int var_14 = -1327552677435538609LL;
long long int var_15 = -2880044911763232558LL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)47;
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
