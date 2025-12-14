#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6007764290191728542LL;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 3954129719U;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_15 = 1244649350;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
