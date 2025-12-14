#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5300930311965463901LL;
long long int var_7 = 1226787662535274359LL;
long long int var_9 = 1633615273031421447LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_17 = -100468225;
unsigned short var_18 = (unsigned short)6586;
long long int var_19 = 8906275344093641880LL;
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
