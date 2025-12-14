#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3762069627U;
_Bool var_2 = (_Bool)0;
unsigned int var_5 = 3041110840U;
unsigned char var_7 = (unsigned char)124;
int zero = 0;
unsigned int var_10 = 885971016U;
short var_11 = (short)31661;
unsigned long long int var_12 = 7955187528262462885ULL;
unsigned short var_13 = (unsigned short)19631;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
