#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2025639099617793189LL;
int var_3 = -2094135487;
signed char var_6 = (signed char)1;
signed char var_8 = (signed char)85;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-25946;
short var_14 = (short)-29455;
long long int var_16 = 4120657697879399630LL;
int zero = 0;
unsigned char var_17 = (unsigned char)161;
unsigned int var_18 = 4037779502U;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
