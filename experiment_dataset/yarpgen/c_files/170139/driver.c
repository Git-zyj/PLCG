#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
long long int var_1 = 1580637306339994093LL;
signed char var_2 = (signed char)-85;
long long int var_9 = -6655367638860243296LL;
long long int var_13 = 2703012464871439273LL;
int zero = 0;
long long int var_14 = 7242130971113266520LL;
signed char var_15 = (signed char)-40;
signed char var_16 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
