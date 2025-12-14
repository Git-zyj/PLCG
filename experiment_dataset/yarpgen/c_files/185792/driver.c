#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 317678221;
long long int var_2 = -331038009201074746LL;
unsigned long long int var_6 = 12144456547829288459ULL;
long long int var_7 = 3494532754442237382LL;
int zero = 0;
unsigned short var_12 = (unsigned short)27055;
unsigned short var_13 = (unsigned short)30373;
void init() {
}

void checksum() {
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
