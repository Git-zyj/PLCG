#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54206;
unsigned long long int var_1 = 2137774224724659042ULL;
signed char var_2 = (signed char)11;
short var_3 = (short)31743;
unsigned int var_4 = 2715261619U;
short var_5 = (short)24887;
signed char var_6 = (signed char)-90;
signed char var_7 = (signed char)22;
long long int var_9 = 7295182448827790295LL;
unsigned int var_10 = 3368079670U;
int zero = 0;
unsigned char var_11 = (unsigned char)41;
int var_12 = 938612432;
signed char var_13 = (signed char)80;
unsigned int var_14 = 3016926908U;
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
