#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21583;
unsigned short var_3 = (unsigned short)65336;
int var_4 = -1408659581;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)223;
int zero = 0;
unsigned short var_14 = (unsigned short)10696;
unsigned long long int var_15 = 15898999042024562297ULL;
unsigned short var_16 = (unsigned short)46376;
long long int var_17 = 3848923332792903344LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
