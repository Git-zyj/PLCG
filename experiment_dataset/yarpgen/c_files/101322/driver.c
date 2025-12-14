#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)7;
short var_1 = (short)16475;
unsigned short var_2 = (unsigned short)64130;
unsigned char var_3 = (unsigned char)59;
unsigned short var_5 = (unsigned short)19433;
signed char var_9 = (signed char)81;
unsigned char var_10 = (unsigned char)205;
int zero = 0;
signed char var_12 = (signed char)-97;
unsigned char var_13 = (unsigned char)117;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 5307635942245383254ULL;
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
