#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1320353736U;
long long int var_12 = 8030054700883372286LL;
signed char var_14 = (signed char)18;
unsigned long long int var_18 = 9233021800055453121ULL;
int zero = 0;
unsigned int var_20 = 176697050U;
_Bool var_21 = (_Bool)0;
int var_22 = 1145378494;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
