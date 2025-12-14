#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
unsigned long long int var_1 = 13270292905826973472ULL;
int var_2 = 720373297;
unsigned char var_3 = (unsigned char)35;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)41150;
_Bool var_6 = (_Bool)1;
long long int var_7 = 7324847575993923532LL;
short var_9 = (short)1761;
signed char var_10 = (signed char)87;
int zero = 0;
unsigned short var_12 = (unsigned short)18109;
short var_13 = (short)-1860;
unsigned int var_14 = 1353883857U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
