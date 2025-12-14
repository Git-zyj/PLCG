#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1357570009;
_Bool var_2 = (_Bool)0;
unsigned char var_8 = (unsigned char)167;
int var_9 = 419462394;
short var_10 = (short)-16655;
signed char var_11 = (signed char)12;
unsigned char var_12 = (unsigned char)126;
int zero = 0;
int var_13 = -195909856;
unsigned char var_14 = (unsigned char)16;
unsigned char var_15 = (unsigned char)56;
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
