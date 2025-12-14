#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1028915775;
unsigned int var_1 = 1354223677U;
_Bool var_2 = (_Bool)0;
short var_3 = (short)1586;
unsigned long long int var_4 = 16750861004709282714ULL;
unsigned int var_6 = 2861527208U;
long long int var_10 = -3546372894228309829LL;
short var_13 = (short)9220;
int zero = 0;
int var_15 = 559453850;
unsigned char var_16 = (unsigned char)211;
long long int var_17 = 5570987437755537834LL;
void init() {
}

void checksum() {
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
