#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3625360216132772295ULL;
signed char var_1 = (signed char)-86;
unsigned long long int var_2 = 10800095679245796866ULL;
signed char var_6 = (signed char)-98;
int var_7 = -1953115946;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)34091;
int var_12 = -732245483;
short var_15 = (short)-13570;
int zero = 0;
unsigned short var_19 = (unsigned short)32682;
unsigned char var_20 = (unsigned char)157;
_Bool var_21 = (_Bool)1;
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
