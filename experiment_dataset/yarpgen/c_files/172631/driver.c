#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)8092;
short var_3 = (short)-30433;
int var_4 = 956275547;
int var_7 = -456438656;
short var_8 = (short)16500;
short var_10 = (short)-26367;
unsigned long long int var_11 = 12457988350785378047ULL;
short var_12 = (short)-30947;
unsigned long long int var_14 = 13854902709050012123ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)51;
unsigned char var_19 = (unsigned char)191;
unsigned short var_20 = (unsigned short)32553;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
