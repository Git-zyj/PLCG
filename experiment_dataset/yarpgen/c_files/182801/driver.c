#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57986;
short var_1 = (short)-19785;
unsigned short var_2 = (unsigned short)49222;
int var_4 = 504601336;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)2418;
signed char var_9 = (signed char)-115;
int var_10 = -1022575924;
int zero = 0;
unsigned int var_12 = 33598415U;
unsigned int var_13 = 2671239761U;
long long int var_14 = 105124984332181516LL;
void init() {
}

void checksum() {
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
