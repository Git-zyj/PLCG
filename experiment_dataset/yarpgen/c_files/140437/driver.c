#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7428755277353861114LL;
unsigned int var_4 = 2949375324U;
unsigned long long int var_8 = 7170731047071977215ULL;
int zero = 0;
unsigned long long int var_13 = 8344943053070815275ULL;
unsigned int var_14 = 1580063691U;
short var_15 = (short)15578;
void init() {
}

void checksum() {
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
