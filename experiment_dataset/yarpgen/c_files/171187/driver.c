#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3339351728U;
unsigned char var_2 = (unsigned char)130;
unsigned int var_6 = 4283827740U;
unsigned char var_9 = (unsigned char)13;
short var_10 = (short)-11378;
short var_11 = (short)-11863;
int var_12 = -571259062;
short var_13 = (short)-6039;
int zero = 0;
unsigned long long int var_15 = 15452616287105849596ULL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)90;
short var_18 = (short)-31320;
void init() {
}

void checksum() {
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
