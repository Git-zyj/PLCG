#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)212;
unsigned short var_6 = (unsigned short)32348;
unsigned char var_12 = (unsigned char)185;
signed char var_13 = (signed char)-95;
unsigned long long int var_14 = 11458448291860937939ULL;
int var_15 = 1502390246;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-30218;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
