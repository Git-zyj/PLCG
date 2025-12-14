#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9021;
unsigned int var_2 = 3430552456U;
int var_4 = 433079178;
long long int var_7 = 1796255010471392385LL;
unsigned int var_8 = 1863481514U;
unsigned int var_9 = 2487267194U;
int var_10 = 788328269;
int zero = 0;
short var_11 = (short)31345;
unsigned short var_12 = (unsigned short)49453;
short var_13 = (short)12535;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
