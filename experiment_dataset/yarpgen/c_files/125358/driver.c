#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 329328703U;
unsigned int var_1 = 3372924867U;
short var_2 = (short)-3765;
unsigned char var_3 = (unsigned char)163;
unsigned int var_5 = 1934009720U;
int var_6 = 1564172566;
short var_11 = (short)-12800;
unsigned char var_12 = (unsigned char)219;
int zero = 0;
short var_14 = (short)26541;
unsigned int var_15 = 3696773388U;
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
