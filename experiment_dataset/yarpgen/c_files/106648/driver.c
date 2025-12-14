#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)16235;
_Bool var_5 = (_Bool)0;
unsigned short var_11 = (unsigned short)25228;
signed char var_16 = (signed char)-8;
int zero = 0;
unsigned long long int var_19 = 9385723854227328054ULL;
unsigned long long int var_20 = 713332275972883526ULL;
short var_21 = (short)11629;
unsigned char var_22 = (unsigned char)129;
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
