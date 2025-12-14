#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
_Bool var_2 = (_Bool)1;
long long int var_4 = -6431100691027283192LL;
unsigned int var_5 = 894809906U;
long long int var_6 = 5727944997733749818LL;
int zero = 0;
signed char var_13 = (signed char)88;
unsigned long long int var_14 = 8944989359041835592ULL;
signed char var_15 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
