#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -746484853;
int var_7 = -596937882;
unsigned char var_8 = (unsigned char)135;
unsigned long long int var_10 = 14842220873850332520ULL;
signed char var_12 = (signed char)124;
unsigned char var_14 = (unsigned char)40;
short var_15 = (short)-8103;
unsigned short var_17 = (unsigned short)11882;
int zero = 0;
unsigned short var_18 = (unsigned short)21622;
unsigned short var_19 = (unsigned short)52944;
short var_20 = (short)-9682;
int var_21 = -393707696;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
