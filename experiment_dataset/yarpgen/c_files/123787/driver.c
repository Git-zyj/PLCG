#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -653303969;
unsigned long long int var_4 = 6244515605337147383ULL;
long long int var_8 = 7815473862865975264LL;
int zero = 0;
signed char var_16 = (signed char)-113;
unsigned short var_17 = (unsigned short)15165;
_Bool var_18 = (_Bool)1;
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
