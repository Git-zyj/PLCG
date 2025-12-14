#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11618770567315075031ULL;
unsigned short var_1 = (unsigned short)31619;
unsigned char var_3 = (unsigned char)160;
short var_5 = (short)13935;
int var_7 = -609223429;
unsigned int var_9 = 874128146U;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)3526;
short var_13 = (short)-23648;
int var_14 = -1920967833;
unsigned long long int var_15 = 13231837548792735666ULL;
signed char var_16 = (signed char)120;
unsigned short var_17 = (unsigned short)27049;
unsigned short var_18 = (unsigned short)14698;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-24690;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
