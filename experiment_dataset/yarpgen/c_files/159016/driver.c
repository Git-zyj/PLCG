#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13704432975892129421ULL;
unsigned int var_2 = 334222909U;
unsigned char var_5 = (unsigned char)198;
signed char var_6 = (signed char)-50;
int var_7 = 372468251;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)135;
_Bool var_11 = (_Bool)0;
int var_12 = -1769989054;
int zero = 0;
long long int var_13 = 7126256332953241974LL;
unsigned long long int var_14 = 8183543327560947722ULL;
short var_15 = (short)-25499;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
