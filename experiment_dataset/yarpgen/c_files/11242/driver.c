#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)20798;
unsigned short var_9 = (unsigned short)24900;
unsigned int var_10 = 1078984831U;
unsigned int var_16 = 152928582U;
unsigned int var_18 = 878421926U;
int zero = 0;
int var_19 = 791946003;
_Bool var_20 = (_Bool)0;
long long int var_21 = -7892964434129619807LL;
unsigned short var_22 = (unsigned short)1648;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
