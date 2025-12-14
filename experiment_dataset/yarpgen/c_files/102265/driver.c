#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8424937192582569543LL;
signed char var_1 = (signed char)5;
unsigned int var_2 = 1506559649U;
int var_10 = 124200434;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)20;
short var_15 = (short)26089;
unsigned char var_16 = (unsigned char)100;
int zero = 0;
unsigned short var_17 = (unsigned short)43629;
unsigned long long int var_18 = 9049570274623435804ULL;
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
