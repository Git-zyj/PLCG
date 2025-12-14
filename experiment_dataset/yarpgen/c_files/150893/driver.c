#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41612;
_Bool var_4 = (_Bool)1;
long long int var_5 = 6424049765282608106LL;
long long int var_9 = 1414998791239262372LL;
int zero = 0;
signed char var_10 = (signed char)70;
signed char var_11 = (signed char)-126;
long long int var_12 = -3678913858158067657LL;
long long int var_13 = -3786536163130610231LL;
long long int var_14 = -8700620910988565779LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
