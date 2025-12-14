#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10719;
long long int var_3 = -1473326181803904245LL;
_Bool var_5 = (_Bool)0;
short var_7 = (short)19864;
unsigned short var_9 = (unsigned short)3237;
unsigned short var_10 = (unsigned short)21715;
short var_11 = (short)10910;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 1762166496848119798LL;
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
