#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4893332971675076516ULL;
short var_2 = (short)-365;
unsigned long long int var_6 = 2705887126121543406ULL;
unsigned int var_8 = 1128745078U;
long long int var_12 = 4436868474764621603LL;
int zero = 0;
unsigned int var_16 = 995013981U;
signed char var_17 = (signed char)119;
unsigned char var_18 = (unsigned char)235;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
