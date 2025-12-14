#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2163898775U;
unsigned short var_2 = (unsigned short)56532;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_11 = 816101027926365796LL;
long long int var_12 = -294608193542811666LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1438778475U;
signed char var_19 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
