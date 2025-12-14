#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)896;
unsigned long long int var_3 = 7819922359052606706ULL;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_15 = (short)-29885;
unsigned char var_16 = (unsigned char)149;
void init() {
}

void checksum() {
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
