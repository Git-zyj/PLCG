#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -763970018;
_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 980611908984832718ULL;
signed char var_6 = (signed char)-101;
short var_8 = (short)-23560;
unsigned char var_9 = (unsigned char)99;
int zero = 0;
long long int var_10 = -9006556861532910127LL;
signed char var_11 = (signed char)20;
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
