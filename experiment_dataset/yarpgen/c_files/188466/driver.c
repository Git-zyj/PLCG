#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1369541328;
unsigned long long int var_7 = 11699209332564716438ULL;
long long int var_9 = 1768313021438201747LL;
_Bool var_11 = (_Bool)1;
unsigned char var_15 = (unsigned char)155;
int zero = 0;
long long int var_17 = 759158281965238938LL;
unsigned int var_18 = 1292575585U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
