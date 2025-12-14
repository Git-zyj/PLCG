#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1737678447U;
short var_1 = (short)-10196;
unsigned short var_2 = (unsigned short)27111;
long long int var_4 = -5707291989794152362LL;
unsigned short var_6 = (unsigned short)19461;
unsigned char var_7 = (unsigned char)178;
unsigned long long int var_9 = 5171495566560281755ULL;
int zero = 0;
signed char var_16 = (signed char)0;
short var_17 = (short)1210;
unsigned short var_18 = (unsigned short)38903;
void init() {
}

void checksum() {
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
