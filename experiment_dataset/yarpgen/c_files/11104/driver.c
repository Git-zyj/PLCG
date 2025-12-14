#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5086621402798817403LL;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 1145091758U;
unsigned int var_5 = 204951859U;
int var_7 = 30749475;
unsigned char var_9 = (unsigned char)177;
short var_10 = (short)-31061;
short var_12 = (short)-29963;
short var_14 = (short)-10855;
int zero = 0;
long long int var_15 = -4048151044922959413LL;
unsigned short var_16 = (unsigned short)14459;
unsigned short var_17 = (unsigned short)25186;
unsigned int var_18 = 2544167746U;
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
