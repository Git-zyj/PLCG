#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)3;
signed char var_4 = (signed char)15;
int var_5 = -1652315353;
unsigned short var_6 = (unsigned short)42878;
unsigned long long int var_8 = 13773512734900355492ULL;
long long int var_12 = 5026044825318357202LL;
signed char var_15 = (signed char)-8;
int zero = 0;
unsigned int var_16 = 1640033592U;
unsigned int var_17 = 2033572073U;
long long int var_18 = 4390873211619293805LL;
short var_19 = (short)-21064;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
