#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1519028845;
long long int var_2 = -9222391622259197741LL;
int var_3 = 1202578222;
int var_4 = -1634653082;
int var_5 = -1953276583;
int var_8 = 548741768;
int var_12 = 1482197986;
int zero = 0;
int var_20 = 769549019;
int var_21 = -1877251587;
void init() {
}

void checksum() {
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
