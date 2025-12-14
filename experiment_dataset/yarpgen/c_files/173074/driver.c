#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1569;
short var_3 = (short)-21784;
signed char var_4 = (signed char)23;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-3;
int var_9 = 1027412069;
unsigned char var_10 = (unsigned char)130;
int zero = 0;
unsigned long long int var_11 = 11574638263429483530ULL;
unsigned long long int var_12 = 13185662674077198908ULL;
void init() {
}

void checksum() {
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
