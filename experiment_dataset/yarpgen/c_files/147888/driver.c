#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -224180683;
unsigned long long int var_2 = 10614863834913149875ULL;
long long int var_3 = -563652945665837694LL;
long long int var_5 = 6787202906970025764LL;
int var_7 = -1563039424;
signed char var_8 = (signed char)-44;
long long int var_12 = -7762630111534955859LL;
unsigned long long int var_13 = 2750085433184686508ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)22;
unsigned long long int var_17 = 3079296578294875461ULL;
unsigned long long int var_18 = 15071937652869983933ULL;
long long int var_19 = 3148114954049461044LL;
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
