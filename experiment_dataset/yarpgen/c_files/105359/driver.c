#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
short var_2 = (short)-26263;
_Bool var_5 = (_Bool)1;
unsigned short var_13 = (unsigned short)63767;
int zero = 0;
int var_20 = -1487893165;
short var_21 = (short)23557;
_Bool var_22 = (_Bool)0;
int var_23 = -1567256722;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
