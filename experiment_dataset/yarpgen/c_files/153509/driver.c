#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4518;
long long int var_2 = 9193106882845920891LL;
long long int var_5 = -4596608786528091527LL;
signed char var_6 = (signed char)-94;
unsigned int var_8 = 3981638780U;
signed char var_9 = (signed char)58;
long long int var_10 = -5709853028426318077LL;
int var_18 = 1552293892;
int zero = 0;
unsigned short var_19 = (unsigned short)2681;
unsigned short var_20 = (unsigned short)6003;
long long int var_21 = -9096338991036971267LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
