#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6506607992254967183LL;
signed char var_4 = (signed char)-115;
_Bool var_8 = (_Bool)0;
long long int var_10 = -7913921350263636053LL;
int zero = 0;
int var_17 = -1777723648;
unsigned short var_18 = (unsigned short)51139;
unsigned int var_19 = 1416122601U;
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
