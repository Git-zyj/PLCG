#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)63928;
long long int var_6 = 5799362807282030927LL;
signed char var_8 = (signed char)108;
unsigned int var_9 = 1278286192U;
unsigned int var_10 = 2382529998U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)48858;
unsigned short var_13 = (unsigned short)4086;
unsigned long long int var_14 = 13587408367066084954ULL;
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
