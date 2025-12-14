#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1494940347;
signed char var_2 = (signed char)113;
unsigned int var_5 = 1571995887U;
signed char var_8 = (signed char)-56;
int var_9 = -1070699047;
_Bool var_12 = (_Bool)0;
unsigned long long int var_15 = 15917123219527435872ULL;
int zero = 0;
unsigned long long int var_16 = 13333277804115080008ULL;
signed char var_17 = (signed char)-115;
_Bool var_18 = (_Bool)0;
int var_19 = 16627254;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
