#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)11727;
unsigned long long int var_4 = 6495436981817538497ULL;
unsigned long long int var_5 = 16772486101286121105ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 9940419694730485699ULL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)130;
int zero = 0;
unsigned char var_13 = (unsigned char)223;
unsigned short var_14 = (unsigned short)24307;
unsigned char var_15 = (unsigned char)137;
short var_16 = (short)17128;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
