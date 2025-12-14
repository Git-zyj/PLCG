#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1711003070;
long long int var_10 = -5403409085920909275LL;
_Bool var_11 = (_Bool)0;
long long int var_15 = -2849377886275279105LL;
int zero = 0;
unsigned short var_18 = (unsigned short)57426;
unsigned char var_19 = (unsigned char)96;
void init() {
}

void checksum() {
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
