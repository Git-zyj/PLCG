#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1823388600;
unsigned int var_3 = 3940943123U;
unsigned char var_5 = (unsigned char)31;
long long int var_6 = 515698716629752603LL;
unsigned long long int var_7 = 5413018530372555320ULL;
unsigned long long int var_9 = 11604230116114887501ULL;
int zero = 0;
int var_10 = 831712619;
_Bool var_11 = (_Bool)0;
int var_12 = -1299646067;
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
