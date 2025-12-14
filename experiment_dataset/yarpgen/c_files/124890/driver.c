#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-85;
unsigned char var_4 = (unsigned char)182;
_Bool var_6 = (_Bool)1;
short var_10 = (short)-22847;
int var_11 = 598339759;
unsigned short var_17 = (unsigned short)41696;
int zero = 0;
unsigned long long int var_18 = 17323966307378483950ULL;
unsigned int var_19 = 3223046053U;
void init() {
}

void checksum() {
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
