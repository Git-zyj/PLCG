#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1243289009;
signed char var_3 = (signed char)12;
unsigned char var_4 = (unsigned char)58;
unsigned long long int var_6 = 1341734936427957177ULL;
unsigned int var_8 = 1019135697U;
unsigned char var_9 = (unsigned char)127;
long long int var_13 = -2120486239485863694LL;
unsigned short var_15 = (unsigned short)10671;
unsigned short var_16 = (unsigned short)44823;
unsigned int var_17 = 1950566207U;
unsigned short var_18 = (unsigned short)39523;
int zero = 0;
unsigned short var_19 = (unsigned short)10001;
unsigned int var_20 = 2507980967U;
long long int var_21 = -1672288212587799671LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
