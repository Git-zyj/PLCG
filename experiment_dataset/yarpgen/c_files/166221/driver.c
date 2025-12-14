#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3537249558517817209LL;
unsigned int var_1 = 184099389U;
signed char var_2 = (signed char)-15;
unsigned short var_3 = (unsigned short)22604;
unsigned short var_4 = (unsigned short)14797;
signed char var_5 = (signed char)-94;
unsigned short var_6 = (unsigned short)20139;
signed char var_8 = (signed char)103;
int var_9 = -1469624669;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = 633196165;
int var_12 = 683807197;
int var_13 = -1241311852;
unsigned short var_14 = (unsigned short)31635;
short var_15 = (short)-4783;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
