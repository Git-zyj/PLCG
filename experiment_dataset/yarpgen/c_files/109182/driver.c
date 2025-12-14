#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14515806041674484447ULL;
unsigned short var_1 = (unsigned short)27022;
unsigned int var_4 = 2121607321U;
int var_5 = -563392672;
unsigned short var_8 = (unsigned short)48212;
long long int var_11 = 2369104354220497604LL;
long long int var_12 = 5919144919268511444LL;
unsigned short var_13 = (unsigned short)37211;
unsigned short var_15 = (unsigned short)51470;
int zero = 0;
long long int var_17 = -5432515104692559259LL;
int var_18 = -1145535093;
unsigned char var_19 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
