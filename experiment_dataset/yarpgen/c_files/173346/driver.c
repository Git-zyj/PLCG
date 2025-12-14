#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53040;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)173;
short var_5 = (short)-28376;
unsigned long long int var_7 = 5050366915761769069ULL;
unsigned char var_10 = (unsigned char)228;
unsigned long long int var_11 = 15933443525541077783ULL;
int zero = 0;
long long int var_12 = -7135689450429573602LL;
long long int var_13 = -1226873733890919806LL;
short var_14 = (short)8290;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
