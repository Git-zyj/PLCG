#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5943028905547222846ULL;
unsigned int var_1 = 3082355233U;
int var_2 = -1545361422;
int var_5 = 1357731006;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 3082556731U;
short var_13 = (short)-11438;
unsigned long long int var_14 = 75544566856726132ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)25006;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3608266498U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
