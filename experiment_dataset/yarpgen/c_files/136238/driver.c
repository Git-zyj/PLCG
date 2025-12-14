#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2523932912U;
short var_6 = (short)-19523;
_Bool var_8 = (_Bool)0;
unsigned short var_12 = (unsigned short)31078;
unsigned short var_14 = (unsigned short)65448;
long long int var_18 = -6260054404302802277LL;
int zero = 0;
short var_20 = (short)28741;
long long int var_21 = 8900908191139109347LL;
long long int var_22 = -627750669572010284LL;
short var_23 = (short)-16681;
long long int var_24 = 2271182227188428883LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
