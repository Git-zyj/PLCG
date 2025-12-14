#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
unsigned int var_2 = 320750032U;
unsigned long long int var_4 = 3138956287289133701ULL;
int var_8 = -733206517;
unsigned long long int var_9 = 4089641436978755743ULL;
unsigned long long int var_11 = 575286502805379634ULL;
short var_12 = (short)5141;
unsigned short var_15 = (unsigned short)38236;
long long int var_16 = -4139657413666906001LL;
unsigned short var_17 = (unsigned short)10252;
int zero = 0;
short var_18 = (short)-12680;
unsigned char var_19 = (unsigned char)224;
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
