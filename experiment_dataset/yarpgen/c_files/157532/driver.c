#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21754;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-7;
int var_6 = -834573508;
long long int var_7 = -4644936223793382569LL;
unsigned char var_9 = (unsigned char)239;
unsigned long long int var_10 = 9022559080750321195ULL;
unsigned char var_11 = (unsigned char)88;
int zero = 0;
unsigned short var_12 = (unsigned short)13505;
unsigned long long int var_13 = 8533284834803147678ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
