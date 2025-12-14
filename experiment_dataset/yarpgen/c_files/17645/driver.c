#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)38;
unsigned int var_3 = 1960824793U;
unsigned short var_4 = (unsigned short)57965;
int var_7 = -1878423679;
long long int var_8 = 8387426251650906141LL;
unsigned long long int var_9 = 13604855720378018625ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -71971604;
short var_12 = (short)-32173;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
