#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3806774692908664401ULL;
unsigned short var_4 = (unsigned short)30109;
_Bool var_5 = (_Bool)1;
short var_7 = (short)4491;
unsigned long long int var_8 = 10287155388409646390ULL;
short var_10 = (short)10529;
long long int var_11 = -3981434248475794713LL;
long long int var_12 = 4409959754367392823LL;
int zero = 0;
unsigned int var_14 = 3362117097U;
long long int var_15 = 8427218962864314457LL;
unsigned long long int var_16 = 9716490641635103315ULL;
unsigned short var_17 = (unsigned short)51154;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
