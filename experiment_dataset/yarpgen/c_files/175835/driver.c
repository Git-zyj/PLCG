#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)1441;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)65064;
unsigned long long int var_12 = 626804856405627008ULL;
long long int var_13 = 3739326286701694297LL;
int zero = 0;
unsigned char var_15 = (unsigned char)212;
long long int var_16 = 541502215760148585LL;
unsigned long long int var_17 = 11480623302655757723ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
