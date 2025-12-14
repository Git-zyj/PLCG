#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8218;
unsigned char var_4 = (unsigned char)51;
int var_5 = 1024106103;
int var_7 = 720986256;
long long int var_8 = -5653160876535922767LL;
signed char var_9 = (signed char)-121;
long long int var_10 = 797874826061042920LL;
unsigned long long int var_11 = 11550602022144530437ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 2979469903879872690LL;
int var_14 = 956672148;
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
