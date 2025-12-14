#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 539030223U;
unsigned int var_3 = 2709387097U;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)37873;
short var_15 = (short)27249;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -4476645634188484639LL;
unsigned int var_18 = 3450428423U;
_Bool var_19 = (_Bool)1;
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
