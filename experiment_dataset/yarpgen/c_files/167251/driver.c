#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13861;
short var_1 = (short)5420;
int var_2 = 377379136;
long long int var_3 = 7082882224932636458LL;
long long int var_4 = 6346602885519855067LL;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)9;
int zero = 0;
long long int var_11 = -3471911310038247642LL;
int var_12 = -572418016;
int var_13 = 1905393572;
int var_14 = 487020792;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
