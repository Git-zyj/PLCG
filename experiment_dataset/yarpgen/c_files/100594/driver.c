#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 368335801223133923ULL;
unsigned char var_4 = (unsigned char)175;
unsigned long long int var_9 = 14083476966812875241ULL;
int zero = 0;
short var_17 = (short)12045;
unsigned short var_18 = (unsigned short)31628;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-15120;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
