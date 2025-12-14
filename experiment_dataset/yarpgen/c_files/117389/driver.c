#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4085224627705527903LL;
signed char var_6 = (signed char)41;
int var_7 = 391003348;
signed char var_8 = (signed char)73;
short var_9 = (short)12377;
unsigned int var_10 = 1368136809U;
unsigned char var_11 = (unsigned char)35;
signed char var_12 = (signed char)97;
short var_14 = (short)-14565;
int zero = 0;
_Bool var_15 = (_Bool)1;
int var_16 = 1991456912;
short var_17 = (short)-18161;
short var_18 = (short)-4064;
long long int var_19 = -80728836221756846LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
