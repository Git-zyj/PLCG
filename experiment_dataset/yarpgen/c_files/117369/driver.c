#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1144840526U;
unsigned long long int var_4 = 8880723849380012839ULL;
unsigned long long int var_5 = 7950688016849869476ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 3387841276U;
unsigned long long int var_10 = 1648888928623053818ULL;
unsigned int var_11 = 3875486960U;
int zero = 0;
unsigned int var_12 = 1150925594U;
unsigned long long int var_13 = 648039959116197244ULL;
unsigned int var_14 = 2897849081U;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
