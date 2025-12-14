#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 336842178789085594LL;
long long int var_8 = 3994220359041488172LL;
long long int var_12 = 6639436263152976544LL;
long long int var_16 = 182783903757282230LL;
int zero = 0;
long long int var_18 = -6027138809125620608LL;
long long int var_19 = 215484492159862005LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
