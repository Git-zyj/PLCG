#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2608;
short var_2 = (short)-32062;
int var_3 = 1034918816;
unsigned short var_6 = (unsigned short)39515;
_Bool var_8 = (_Bool)0;
unsigned char var_13 = (unsigned char)214;
int zero = 0;
short var_14 = (short)-30502;
unsigned long long int var_15 = 2297807166013622947ULL;
int var_16 = -835175016;
_Bool var_17 = (_Bool)0;
short var_18 = (short)11463;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
