#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
long long int var_6 = -4414671487454227280LL;
unsigned char var_10 = (unsigned char)209;
int zero = 0;
unsigned char var_16 = (unsigned char)149;
unsigned long long int var_17 = 6342647804667202713ULL;
unsigned short var_18 = (unsigned short)40620;
int var_19 = 1974832052;
void init() {
}

void checksum() {
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
