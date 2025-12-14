#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -6948901217812363586LL;
unsigned short var_9 = (unsigned short)2243;
_Bool var_11 = (_Bool)1;
int var_15 = 930324361;
int var_16 = 650792943;
int zero = 0;
int var_17 = 1293229028;
unsigned short var_18 = (unsigned short)41353;
void init() {
}

void checksum() {
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
