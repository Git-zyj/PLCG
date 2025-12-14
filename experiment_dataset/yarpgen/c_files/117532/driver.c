#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11270335134521604833ULL;
unsigned short var_2 = (unsigned short)28586;
short var_5 = (short)-20019;
int var_6 = 103447314;
unsigned char var_8 = (unsigned char)127;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)12145;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
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
