#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)30;
unsigned short var_3 = (unsigned short)62571;
long long int var_4 = 6077154730028320114LL;
_Bool var_6 = (_Bool)1;
int var_9 = 23203463;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-27749;
unsigned int var_16 = 943861141U;
void init() {
}

void checksum() {
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
