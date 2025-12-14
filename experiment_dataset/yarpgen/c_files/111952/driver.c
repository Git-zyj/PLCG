#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 13016218872092243603ULL;
unsigned short var_9 = (unsigned short)39493;
unsigned int var_12 = 2259000338U;
unsigned char var_18 = (unsigned char)163;
int zero = 0;
unsigned int var_19 = 981680080U;
unsigned char var_20 = (unsigned char)222;
unsigned short var_21 = (unsigned short)37827;
unsigned short var_22 = (unsigned short)8380;
int var_23 = -298490922;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
