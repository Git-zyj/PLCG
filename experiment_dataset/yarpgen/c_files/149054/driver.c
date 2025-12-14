#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-7;
unsigned int var_2 = 309547591U;
int var_6 = 1396918200;
signed char var_7 = (signed char)-24;
int var_11 = 365588269;
unsigned char var_13 = (unsigned char)183;
signed char var_14 = (signed char)71;
unsigned char var_15 = (unsigned char)179;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = -8378747685626517094LL;
long long int var_18 = -2885466697609728301LL;
void init() {
}

void checksum() {
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
