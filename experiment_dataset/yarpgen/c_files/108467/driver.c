#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36995;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)27904;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)18775;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)13455;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)15574;
unsigned short var_14 = (unsigned short)6957;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)59781;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
