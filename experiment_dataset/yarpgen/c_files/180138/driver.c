#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12551296432039654302ULL;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-34;
long long int var_6 = 3493528774769113024LL;
_Bool var_7 = (_Bool)0;
signed char var_14 = (signed char)-10;
int zero = 0;
long long int var_15 = -872704621220537787LL;
long long int var_16 = 9150076577246501320LL;
_Bool var_17 = (_Bool)0;
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
