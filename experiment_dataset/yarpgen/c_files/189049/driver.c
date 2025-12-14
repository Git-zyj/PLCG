#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3701097833078489633LL;
long long int var_5 = -5940646035132395432LL;
int var_8 = -1246223260;
int var_9 = -608925088;
unsigned long long int var_13 = 1740601040046159602ULL;
long long int var_16 = 7089785440719550447LL;
unsigned int var_17 = 3851703786U;
int var_18 = 282475219;
int zero = 0;
int var_19 = 1299866886;
unsigned short var_20 = (unsigned short)6759;
int var_21 = -2044057575;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
