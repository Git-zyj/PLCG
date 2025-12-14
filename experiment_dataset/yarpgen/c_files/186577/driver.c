#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-88;
_Bool var_9 = (_Bool)1;
signed char var_18 = (signed char)-73;
int zero = 0;
unsigned long long int var_20 = 2162878581231251389ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 17481070624077812977ULL;
unsigned int var_23 = 4241882790U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
