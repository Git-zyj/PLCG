#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7714412173770309424LL;
long long int var_3 = 6518051643495149441LL;
long long int var_6 = 3505470336318214287LL;
unsigned char var_7 = (unsigned char)217;
unsigned long long int var_9 = 700971552969978494ULL;
unsigned char var_10 = (unsigned char)218;
long long int var_12 = 4578015127342323360LL;
int var_14 = 1031840264;
int zero = 0;
unsigned char var_15 = (unsigned char)77;
unsigned short var_16 = (unsigned short)3876;
long long int var_17 = 7822066773748527782LL;
unsigned long long int var_18 = 12630538257311417088ULL;
unsigned short var_19 = (unsigned short)12342;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
