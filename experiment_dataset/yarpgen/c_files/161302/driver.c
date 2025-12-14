#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)27;
unsigned short var_1 = (unsigned short)18513;
_Bool var_2 = (_Bool)1;
long long int var_3 = -1444041104508400343LL;
long long int var_4 = -4094337842996714069LL;
unsigned long long int var_6 = 12339264636478382740ULL;
unsigned char var_9 = (unsigned char)174;
signed char var_10 = (signed char)75;
int zero = 0;
unsigned short var_15 = (unsigned short)24487;
unsigned int var_16 = 1686950925U;
long long int var_17 = -2779447029442845277LL;
signed char var_18 = (signed char)58;
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
