#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10361864274052729488ULL;
unsigned int var_1 = 2938269446U;
unsigned char var_2 = (unsigned char)151;
signed char var_4 = (signed char)89;
_Bool var_5 = (_Bool)0;
long long int var_7 = 1568184005585201939LL;
unsigned short var_9 = (unsigned short)15832;
unsigned long long int var_15 = 7220592662433132287ULL;
int zero = 0;
long long int var_16 = -6498835107430285606LL;
signed char var_17 = (signed char)28;
long long int var_18 = 2510416485449255542LL;
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
