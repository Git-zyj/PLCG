#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25518;
long long int var_9 = 6373692706737262522LL;
int var_10 = 1276237971;
unsigned short var_11 = (unsigned short)58573;
int var_15 = -743242368;
int zero = 0;
long long int var_16 = 4145652690183618042LL;
_Bool var_17 = (_Bool)0;
int var_18 = -1189462353;
unsigned char var_19 = (unsigned char)134;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
