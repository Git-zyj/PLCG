#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)243;
unsigned char var_2 = (unsigned char)251;
signed char var_4 = (signed char)-13;
short var_5 = (short)32225;
int var_6 = -428660872;
unsigned short var_8 = (unsigned short)32583;
int var_9 = 1317346957;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-91;
short var_16 = (short)-29138;
void init() {
}

void checksum() {
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
