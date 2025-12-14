#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63902;
unsigned long long int var_2 = 1559765426376936450ULL;
long long int var_4 = -6823123799052273305LL;
long long int var_7 = 1801145427312609259LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1274867364U;
unsigned short var_13 = (unsigned short)48998;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
