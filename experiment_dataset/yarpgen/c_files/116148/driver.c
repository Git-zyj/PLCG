#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1831289518U;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)41853;
unsigned long long int var_6 = 10607764662785630899ULL;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)-83;
short var_13 = (short)23554;
int var_14 = 780215560;
int zero = 0;
int var_20 = -527606295;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
