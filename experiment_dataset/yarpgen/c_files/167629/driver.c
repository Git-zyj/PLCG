#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)63;
unsigned int var_1 = 562314942U;
unsigned long long int var_6 = 6305904269928683271ULL;
int var_7 = -884063892;
long long int var_11 = -4227222607341421264LL;
unsigned long long int var_12 = 10827974740931009073ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 7901906496368486174ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)4;
long long int var_18 = 7228164711789982340LL;
signed char var_19 = (signed char)-123;
unsigned char var_20 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
