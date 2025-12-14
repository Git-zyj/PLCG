#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)83;
unsigned char var_3 = (unsigned char)43;
short var_4 = (short)-16174;
unsigned long long int var_6 = 6540631987402660087ULL;
unsigned char var_8 = (unsigned char)54;
unsigned int var_9 = 3468396450U;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)184;
unsigned short var_16 = (unsigned short)37048;
unsigned int var_18 = 2756837606U;
int zero = 0;
unsigned short var_19 = (unsigned short)54559;
short var_20 = (short)7748;
short var_21 = (short)22866;
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
