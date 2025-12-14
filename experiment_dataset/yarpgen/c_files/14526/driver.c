#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)52355;
unsigned short var_2 = (unsigned short)8972;
long long int var_3 = 3925836821591750555LL;
long long int var_7 = -4881310568176948112LL;
unsigned short var_10 = (unsigned short)58705;
int zero = 0;
unsigned short var_11 = (unsigned short)29980;
unsigned int var_12 = 1647386994U;
signed char var_13 = (signed char)-102;
unsigned short var_14 = (unsigned short)37874;
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
