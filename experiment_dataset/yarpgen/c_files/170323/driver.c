#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)5900;
unsigned short var_6 = (unsigned short)4112;
short var_9 = (short)9071;
short var_10 = (short)21203;
short var_13 = (short)-27653;
unsigned short var_17 = (unsigned short)59640;
int zero = 0;
signed char var_20 = (signed char)24;
short var_21 = (short)20342;
short var_22 = (short)5862;
unsigned short var_23 = (unsigned short)32663;
signed char var_24 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
