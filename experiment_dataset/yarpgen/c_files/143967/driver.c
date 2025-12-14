#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3651983613224717141LL;
_Bool var_2 = (_Bool)1;
short var_9 = (short)10797;
unsigned long long int var_10 = 5344689632020261767ULL;
unsigned char var_14 = (unsigned char)171;
unsigned char var_19 = (unsigned char)236;
int zero = 0;
signed char var_20 = (signed char)113;
signed char var_21 = (signed char)104;
_Bool var_22 = (_Bool)1;
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
