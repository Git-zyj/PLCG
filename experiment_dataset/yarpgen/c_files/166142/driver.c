#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-871;
long long int var_7 = -7097608681140691445LL;
unsigned int var_8 = 3167464786U;
unsigned long long int var_12 = 17619664100531940751ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -423968085;
signed char var_16 = (signed char)70;
void init() {
}

void checksum() {
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
