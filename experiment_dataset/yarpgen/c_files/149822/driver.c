#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 560995174;
unsigned char var_8 = (unsigned char)68;
short var_9 = (short)3650;
unsigned int var_11 = 263903995U;
unsigned long long int var_15 = 15936131900567617605ULL;
int zero = 0;
int var_16 = 1621675281;
unsigned char var_17 = (unsigned char)208;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
