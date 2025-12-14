#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4401659854447605354ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 16206471902892725192ULL;
short var_5 = (short)12483;
short var_7 = (short)5181;
signed char var_8 = (signed char)-89;
unsigned char var_9 = (unsigned char)233;
unsigned int var_10 = 1857146687U;
signed char var_12 = (signed char)54;
int zero = 0;
short var_13 = (short)-14514;
unsigned int var_14 = 1449102019U;
signed char var_15 = (signed char)-121;
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
