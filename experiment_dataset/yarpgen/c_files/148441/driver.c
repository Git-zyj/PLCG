#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17696694755743011828ULL;
signed char var_2 = (signed char)0;
_Bool var_3 = (_Bool)1;
short var_5 = (short)30366;
unsigned short var_7 = (unsigned short)19263;
unsigned int var_8 = 3722936550U;
short var_9 = (short)22895;
int zero = 0;
unsigned int var_10 = 3232733122U;
int var_11 = -1593337183;
unsigned short var_12 = (unsigned short)10176;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
