#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5409938545281874430LL;
int var_5 = 1625016880;
unsigned char var_6 = (unsigned char)30;
_Bool var_10 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned int var_18 = 168689205U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 7239359580056689000ULL;
unsigned long long int var_21 = 5306372221825611838ULL;
int var_22 = 345989739;
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
