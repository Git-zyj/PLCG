#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 542536580U;
long long int var_7 = -279495628240287485LL;
unsigned short var_8 = (unsigned short)53938;
_Bool var_18 = (_Bool)0;
int var_19 = 1723378642;
int zero = 0;
unsigned int var_20 = 2578949006U;
signed char var_21 = (signed char)122;
int var_22 = 1738821076;
unsigned long long int var_23 = 10036693827248796705ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
