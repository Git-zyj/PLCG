#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23463;
unsigned int var_2 = 1768856042U;
unsigned short var_5 = (unsigned short)25714;
unsigned int var_7 = 4206767088U;
short var_8 = (short)-26601;
signed char var_9 = (signed char)-35;
unsigned long long int var_12 = 15724772155092766400ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)56484;
int var_14 = -1605910514;
_Bool var_15 = (_Bool)1;
long long int var_16 = 8638955341090611330LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
