#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1466914823591609189LL;
unsigned int var_2 = 2213982485U;
unsigned long long int var_3 = 10372267493227571380ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)130;
_Bool var_10 = (_Bool)0;
int var_12 = 358508099;
int zero = 0;
unsigned char var_14 = (unsigned char)223;
int var_15 = -1205446542;
long long int var_16 = -2821234343114026641LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
