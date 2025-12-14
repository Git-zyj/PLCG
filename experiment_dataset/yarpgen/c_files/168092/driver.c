#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2428998069695283744LL;
unsigned long long int var_2 = 214378322096809428ULL;
int var_3 = 305191553;
long long int var_4 = 8827621257407433278LL;
unsigned int var_6 = 3930502760U;
_Bool var_7 = (_Bool)0;
int var_9 = 1944069006;
long long int var_10 = 7679454926974545225LL;
int zero = 0;
long long int var_11 = 7713827213663058439LL;
unsigned long long int var_12 = 358452299607593953ULL;
unsigned char var_13 = (unsigned char)253;
long long int var_14 = 1816679951048077756LL;
unsigned long long int var_15 = 1662037150979067160ULL;
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
