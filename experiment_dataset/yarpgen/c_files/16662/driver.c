#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17718;
short var_3 = (short)-26578;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 11665899004272105405ULL;
unsigned char var_8 = (unsigned char)61;
long long int var_9 = -3647405285488801822LL;
unsigned int var_11 = 148614867U;
unsigned char var_12 = (unsigned char)107;
long long int var_14 = -6387672557536231226LL;
int zero = 0;
unsigned int var_17 = 1267473462U;
unsigned long long int var_18 = 1502922005479814815ULL;
unsigned int var_19 = 3351355870U;
void init() {
}

void checksum() {
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
