#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)12018;
unsigned short var_4 = (unsigned short)1827;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 9073946161524133547ULL;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = -4328697601081096099LL;
int var_14 = -1176291497;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
