#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1739267506;
unsigned long long int var_3 = 16277372066478258977ULL;
long long int var_4 = 3290582219199913644LL;
unsigned long long int var_6 = 4272961654061203753ULL;
unsigned long long int var_7 = 17155552002013405268ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_11 = -1065022964884903523LL;
unsigned long long int var_12 = 3419354291645628756ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
