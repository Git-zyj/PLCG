#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3607035085U;
unsigned long long int var_5 = 6147389301273805399ULL;
long long int var_9 = 4402380848869018427LL;
unsigned char var_13 = (unsigned char)161;
unsigned long long int var_14 = 16692946620141530552ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)153;
short var_16 = (short)-8459;
long long int var_17 = -2803519942898365019LL;
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
