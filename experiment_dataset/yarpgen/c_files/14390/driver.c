#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -549106063;
unsigned char var_2 = (unsigned char)111;
short var_4 = (short)-13055;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)13;
unsigned int var_8 = 2236924321U;
signed char var_10 = (signed char)-93;
signed char var_14 = (signed char)-72;
int zero = 0;
unsigned long long int var_16 = 12695729400784979274ULL;
unsigned long long int var_17 = 17636098224926238260ULL;
void init() {
}

void checksum() {
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
