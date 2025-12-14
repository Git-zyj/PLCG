#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52391;
unsigned int var_2 = 1009338532U;
signed char var_4 = (signed char)89;
long long int var_5 = 1558112932225651605LL;
unsigned char var_6 = (unsigned char)182;
unsigned char var_7 = (unsigned char)10;
short var_8 = (short)-1995;
signed char var_9 = (signed char)93;
int zero = 0;
unsigned short var_10 = (unsigned short)49740;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)177;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
