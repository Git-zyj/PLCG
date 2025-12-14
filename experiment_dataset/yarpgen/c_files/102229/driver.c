#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)51;
unsigned short var_3 = (unsigned short)2198;
unsigned short var_4 = (unsigned short)47421;
unsigned int var_5 = 2091070767U;
unsigned char var_6 = (unsigned char)31;
unsigned long long int var_8 = 10089390757353952124ULL;
signed char var_9 = (signed char)-37;
int zero = 0;
signed char var_10 = (signed char)56;
signed char var_11 = (signed char)67;
int var_12 = -1613438719;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
