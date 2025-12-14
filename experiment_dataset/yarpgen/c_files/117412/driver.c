#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13237973080590452346ULL;
short var_5 = (short)-15555;
unsigned short var_7 = (unsigned short)14509;
unsigned long long int var_8 = 18146562947322639212ULL;
short var_9 = (short)-7238;
unsigned char var_10 = (unsigned char)140;
short var_11 = (short)11266;
long long int var_13 = -6834481817235755184LL;
int zero = 0;
unsigned int var_15 = 345588104U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
