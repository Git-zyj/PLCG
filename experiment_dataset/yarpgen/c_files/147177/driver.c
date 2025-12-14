#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)180;
signed char var_1 = (signed char)83;
unsigned char var_3 = (unsigned char)99;
unsigned char var_4 = (unsigned char)24;
signed char var_5 = (signed char)-123;
signed char var_7 = (signed char)-97;
signed char var_8 = (signed char)80;
unsigned long long int var_9 = 7480286704200914384ULL;
unsigned short var_10 = (unsigned short)41566;
int zero = 0;
short var_12 = (short)16210;
short var_13 = (short)31304;
long long int var_14 = 6460979032485747247LL;
unsigned char var_15 = (unsigned char)211;
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
