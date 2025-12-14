#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 11253927805726113259ULL;
int var_13 = -311383800;
int zero = 0;
unsigned long long int var_17 = 2715733184141772703ULL;
unsigned long long int var_18 = 1798243622273985311ULL;
unsigned long long int var_19 = 4062542370165794245ULL;
unsigned long long int var_20 = 11481616184104317747ULL;
unsigned long long int var_21 = 4804767484585956006ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
