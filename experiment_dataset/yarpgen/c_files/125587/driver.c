#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)117;
int var_4 = -1450325193;
signed char var_5 = (signed char)30;
unsigned long long int var_7 = 7649424623015643047ULL;
short var_9 = (short)11481;
int zero = 0;
unsigned short var_11 = (unsigned short)7777;
int var_12 = -356264439;
unsigned int var_13 = 658848198U;
long long int var_14 = -3906625623088837511LL;
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
