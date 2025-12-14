#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4791;
short var_3 = (short)-32555;
signed char var_6 = (signed char)-80;
unsigned char var_8 = (unsigned char)78;
unsigned long long int var_11 = 2150343913507368866ULL;
short var_13 = (short)5117;
unsigned int var_14 = 2462922414U;
int zero = 0;
unsigned char var_19 = (unsigned char)43;
unsigned long long int var_20 = 10866821964472466964ULL;
unsigned short var_21 = (unsigned short)60094;
unsigned int var_22 = 3160981209U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
