#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3355675887U;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)42404;
unsigned long long int var_17 = 14693803014913968806ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1817935044;
void init() {
}

void checksum() {
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
