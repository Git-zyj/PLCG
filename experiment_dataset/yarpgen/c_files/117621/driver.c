#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1379472956700485912LL;
unsigned short var_5 = (unsigned short)56705;
_Bool var_10 = (_Bool)1;
unsigned long long int var_17 = 9367576924528226762ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)40302;
long long int var_21 = -6732699320370027684LL;
unsigned int var_22 = 4262980692U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
