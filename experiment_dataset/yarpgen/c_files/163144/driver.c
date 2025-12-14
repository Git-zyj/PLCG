#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -136808510;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 3063353411192792716ULL;
signed char var_9 = (signed char)117;
signed char var_14 = (signed char)33;
int zero = 0;
unsigned int var_17 = 3138815160U;
unsigned int var_18 = 1628446835U;
short var_19 = (short)22497;
unsigned int var_20 = 515355226U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
