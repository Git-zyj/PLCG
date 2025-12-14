#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)51;
long long int var_3 = -7974989379570268546LL;
int var_4 = -796728398;
short var_5 = (short)27741;
short var_6 = (short)30776;
short var_7 = (short)-6463;
short var_9 = (short)-20018;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)377;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-11208;
unsigned short var_14 = (unsigned short)39154;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
