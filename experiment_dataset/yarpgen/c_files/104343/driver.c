#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1737701302U;
long long int var_8 = 7059132163747473748LL;
signed char var_11 = (signed char)127;
int zero = 0;
long long int var_12 = 1722641130157694677LL;
unsigned long long int var_13 = 228553490611565806ULL;
int var_14 = 260756269;
long long int var_15 = -4156205159322317446LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
