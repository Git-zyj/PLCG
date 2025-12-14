#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13296;
unsigned short var_3 = (unsigned short)27244;
int var_4 = 1877736085;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)38;
int zero = 0;
unsigned long long int var_16 = 14087388169707711077ULL;
long long int var_17 = -3247242424702233205LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
