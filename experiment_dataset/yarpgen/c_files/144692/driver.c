#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9796;
_Bool var_1 = (_Bool)1;
int var_3 = -1489784540;
long long int var_4 = -6637566005292970158LL;
unsigned char var_5 = (unsigned char)147;
unsigned long long int var_6 = 11806316442618340395ULL;
int var_9 = 11294962;
int zero = 0;
unsigned short var_10 = (unsigned short)33999;
unsigned char var_11 = (unsigned char)141;
int var_12 = 1900428326;
unsigned long long int var_13 = 15674687902544431859ULL;
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
