#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)164;
unsigned short var_1 = (unsigned short)27425;
short var_2 = (short)-10285;
unsigned long long int var_8 = 15605932022351474552ULL;
unsigned int var_11 = 628174774U;
int var_12 = 185767336;
unsigned long long int var_13 = 8608497481723887521ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)47424;
_Bool var_15 = (_Bool)0;
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
