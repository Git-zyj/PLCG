#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-511;
short var_1 = (short)-16320;
unsigned long long int var_2 = 3460140802938493658ULL;
unsigned long long int var_6 = 1247348286898369730ULL;
unsigned long long int var_7 = 8455511497726058642ULL;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 2402005112U;
int zero = 0;
unsigned int var_12 = 142010456U;
unsigned short var_13 = (unsigned short)34437;
unsigned short var_14 = (unsigned short)15251;
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
