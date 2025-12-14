#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15341448803190523775ULL;
unsigned short var_4 = (unsigned short)2771;
signed char var_5 = (signed char)33;
unsigned short var_6 = (unsigned short)53004;
unsigned short var_7 = (unsigned short)18895;
short var_9 = (short)-11393;
unsigned int var_10 = 2137522889U;
unsigned char var_11 = (unsigned char)148;
unsigned long long int var_12 = 5396574924552457688ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -656516763461191797LL;
int var_16 = 614284242;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
