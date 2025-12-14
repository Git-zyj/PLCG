#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 834687941;
int var_3 = -1682306516;
unsigned short var_4 = (unsigned short)33602;
int var_5 = -2001480929;
unsigned int var_6 = 3696800859U;
unsigned long long int var_8 = 6960345323136514483ULL;
unsigned long long int var_9 = 16098234340221286355ULL;
int zero = 0;
int var_10 = -1479770900;
int var_11 = -1511198918;
long long int var_12 = 3490888898245572194LL;
unsigned int var_13 = 935820651U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
