#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6010254051682190180LL;
long long int var_4 = -27510991722647502LL;
long long int var_5 = 2019218782816748217LL;
long long int var_9 = 1150239057024874622LL;
long long int var_14 = -3795048639728465729LL;
long long int var_16 = 391002159257169337LL;
long long int var_17 = -7477985979123794886LL;
int zero = 0;
long long int var_20 = -3236559961956417900LL;
long long int var_21 = -4062931343846932250LL;
long long int var_22 = -8972507618401033751LL;
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
