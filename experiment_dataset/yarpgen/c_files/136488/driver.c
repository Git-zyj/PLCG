#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)921;
unsigned char var_3 = (unsigned char)142;
int var_6 = -1086883825;
signed char var_8 = (signed char)120;
int var_9 = 1168338316;
int zero = 0;
unsigned int var_10 = 3557904951U;
_Bool var_11 = (_Bool)0;
short var_12 = (short)31209;
signed char var_13 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
