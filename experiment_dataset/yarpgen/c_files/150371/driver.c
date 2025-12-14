#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8939;
int var_3 = -348572325;
unsigned short var_4 = (unsigned short)45366;
short var_5 = (short)-8451;
short var_7 = (short)-22029;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)111;
int var_12 = 1821511377;
unsigned long long int var_13 = 13935620307925787299ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)14745;
unsigned long long int var_15 = 13037969427868169976ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
