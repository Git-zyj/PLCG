#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 278572854U;
_Bool var_5 = (_Bool)0;
unsigned short var_10 = (unsigned short)14079;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 10540311947282868642ULL;
int var_21 = -408548701;
short var_22 = (short)11526;
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
