#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -790960025743644027LL;
_Bool var_3 = (_Bool)0;
unsigned int var_7 = 660550462U;
long long int var_8 = 6229751640087660941LL;
short var_11 = (short)29991;
unsigned int var_12 = 2428763243U;
unsigned int var_14 = 1046263656U;
int zero = 0;
long long int var_16 = 4939563487740190208LL;
unsigned char var_17 = (unsigned char)181;
long long int var_18 = 7683845141744298148LL;
unsigned int var_19 = 3733417392U;
unsigned int var_20 = 3356231824U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
