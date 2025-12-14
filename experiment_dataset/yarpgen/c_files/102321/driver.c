#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -978988541;
signed char var_2 = (signed char)-60;
unsigned char var_4 = (unsigned char)245;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 11587502242579980940ULL;
signed char var_7 = (signed char)-20;
unsigned long long int var_9 = 10340756142788066087ULL;
short var_10 = (short)23794;
int zero = 0;
unsigned short var_11 = (unsigned short)31823;
unsigned short var_12 = (unsigned short)23893;
_Bool var_13 = (_Bool)0;
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
