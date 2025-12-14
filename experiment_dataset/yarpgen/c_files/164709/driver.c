#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)12867;
long long int var_7 = 6169875966843869462LL;
unsigned long long int var_8 = 5199338489346051826ULL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)70;
unsigned short var_11 = (unsigned short)34575;
int zero = 0;
unsigned short var_12 = (unsigned short)52001;
unsigned short var_13 = (unsigned short)21118;
void init() {
}

void checksum() {
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
