#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2450816782599849688LL;
long long int var_2 = -8147841125737235727LL;
short var_4 = (short)9039;
int var_7 = -3122149;
unsigned long long int var_8 = 1075283197169731495ULL;
short var_10 = (short)3513;
int zero = 0;
signed char var_14 = (signed char)-51;
unsigned char var_15 = (unsigned char)141;
void init() {
}

void checksum() {
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
