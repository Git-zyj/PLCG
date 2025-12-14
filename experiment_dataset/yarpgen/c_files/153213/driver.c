#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2785196048052665841ULL;
unsigned long long int var_3 = 14791133145037517106ULL;
long long int var_4 = -3175990816498985179LL;
unsigned long long int var_5 = 4780363234654002585ULL;
long long int var_6 = 543787208550133194LL;
long long int var_7 = -8498039141464610516LL;
long long int var_8 = -4768416419991214918LL;
int zero = 0;
unsigned long long int var_10 = 249132136469910004ULL;
unsigned long long int var_11 = 2472641249469644060ULL;
long long int var_12 = 9137525820996700322LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
