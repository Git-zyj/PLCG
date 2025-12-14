#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10299388986624761750ULL;
unsigned int var_5 = 1197411938U;
unsigned char var_6 = (unsigned char)162;
unsigned long long int var_9 = 3049480591951507332ULL;
unsigned char var_11 = (unsigned char)190;
signed char var_13 = (signed char)32;
_Bool var_14 = (_Bool)1;
unsigned char var_16 = (unsigned char)189;
int zero = 0;
short var_17 = (short)-4781;
unsigned char var_18 = (unsigned char)252;
unsigned int var_19 = 2593777174U;
unsigned char var_20 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
