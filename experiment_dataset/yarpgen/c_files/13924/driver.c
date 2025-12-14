#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18568;
unsigned char var_2 = (unsigned char)106;
unsigned long long int var_3 = 12337320233674578552ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 3192865554U;
unsigned short var_7 = (unsigned short)5897;
short var_9 = (short)29878;
short var_10 = (short)-3546;
short var_11 = (short)-17221;
unsigned short var_12 = (unsigned short)18922;
int zero = 0;
unsigned short var_15 = (unsigned short)11159;
short var_16 = (short)20785;
int var_17 = -793719916;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
