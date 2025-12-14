#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8780412179278920191LL;
unsigned int var_2 = 2060230713U;
unsigned long long int var_4 = 14184018589964734467ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 15735052603390660376ULL;
unsigned long long int var_9 = 16880353404741151414ULL;
int zero = 0;
unsigned int var_12 = 1853969973U;
signed char var_13 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
