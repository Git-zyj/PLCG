#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
unsigned long long int var_4 = 2100484290110567280ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 2707018406909916273ULL;
int zero = 0;
unsigned long long int var_15 = 8728492183264583324ULL;
unsigned short var_16 = (unsigned short)44973;
void init() {
}

void checksum() {
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
