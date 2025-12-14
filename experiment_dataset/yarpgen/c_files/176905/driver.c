#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-118;
unsigned int var_3 = 1695176179U;
long long int var_4 = -3507988015479966169LL;
short var_5 = (short)-6887;
unsigned short var_8 = (unsigned short)5664;
unsigned char var_9 = (unsigned char)145;
int zero = 0;
short var_13 = (short)10439;
unsigned short var_14 = (unsigned short)50158;
short var_15 = (short)8343;
unsigned int var_16 = 2897664715U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
