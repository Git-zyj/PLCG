#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7039667793763207319LL;
unsigned int var_11 = 3649705791U;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_18 = -8455855341822329971LL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-83;
void init() {
}

void checksum() {
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
