#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)243;
unsigned long long int var_3 = 10099872464354941936ULL;
signed char var_4 = (signed char)-35;
unsigned short var_10 = (unsigned short)56993;
short var_12 = (short)-15970;
signed char var_14 = (signed char)50;
long long int var_17 = -2414276466180496242LL;
int zero = 0;
unsigned long long int var_19 = 4709391931456119773ULL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
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
