#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9819594581813684879ULL;
unsigned long long int var_2 = 144513120129963693ULL;
unsigned char var_3 = (unsigned char)179;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-14241;
unsigned long long int var_6 = 11315418812488611742ULL;
unsigned int var_7 = 242256344U;
unsigned long long int var_8 = 14936107337438568660ULL;
int zero = 0;
unsigned long long int var_10 = 16749686520548274735ULL;
unsigned long long int var_11 = 8010021588040519244ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
