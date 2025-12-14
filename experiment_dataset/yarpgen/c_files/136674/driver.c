#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15629337645659388211ULL;
unsigned char var_3 = (unsigned char)131;
unsigned char var_5 = (unsigned char)52;
short var_6 = (short)12080;
signed char var_7 = (signed char)-125;
short var_9 = (short)-9502;
unsigned int var_10 = 2442240360U;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)22656;
unsigned char var_13 = (unsigned char)7;
unsigned long long int var_14 = 7330147631679760051ULL;
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
