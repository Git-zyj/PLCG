#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 16278305880004393580ULL;
unsigned char var_5 = (unsigned char)103;
unsigned short var_6 = (unsigned short)30406;
unsigned int var_7 = 2389152347U;
signed char var_8 = (signed char)52;
unsigned short var_9 = (unsigned short)21846;
unsigned int var_10 = 1957977569U;
signed char var_11 = (signed char)81;
int zero = 0;
short var_12 = (short)32435;
signed char var_13 = (signed char)104;
long long int var_14 = 2076891400935164039LL;
signed char var_15 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
