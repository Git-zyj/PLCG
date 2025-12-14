#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1855069163;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
long long int var_6 = 4912834689170188894LL;
signed char var_7 = (signed char)9;
_Bool var_10 = (_Bool)1;
short var_13 = (short)26043;
int zero = 0;
int var_15 = -659816504;
short var_16 = (short)22415;
unsigned char var_17 = (unsigned char)185;
signed char var_18 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
