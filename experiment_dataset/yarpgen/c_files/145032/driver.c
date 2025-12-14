#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4259004749004650089LL;
_Bool var_3 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)9;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 866950152538611693ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
