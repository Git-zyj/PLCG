#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2053583006;
unsigned int var_2 = 1556450020U;
signed char var_3 = (signed char)65;
int var_4 = -116661476;
long long int var_5 = -6130559309167957244LL;
unsigned char var_7 = (unsigned char)66;
unsigned short var_8 = (unsigned short)54096;
short var_10 = (short)20076;
short var_12 = (short)-14423;
short var_13 = (short)21340;
unsigned long long int var_14 = 11488257352629076463ULL;
unsigned short var_15 = (unsigned short)59547;
int zero = 0;
int var_17 = 1505616562;
int var_18 = -1059301119;
short var_19 = (short)-7458;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
