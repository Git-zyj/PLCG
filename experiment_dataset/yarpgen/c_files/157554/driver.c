#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2889414172U;
unsigned int var_4 = 1715065U;
unsigned char var_6 = (unsigned char)220;
int zero = 0;
unsigned long long int var_10 = 16367578992265248894ULL;
long long int var_11 = -514867481824615618LL;
unsigned long long int var_12 = 11802557732188698828ULL;
unsigned char var_13 = (unsigned char)83;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
