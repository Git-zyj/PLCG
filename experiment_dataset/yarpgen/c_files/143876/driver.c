#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)206;
long long int var_5 = -3154216468727737790LL;
short var_6 = (short)-5381;
unsigned char var_8 = (unsigned char)113;
long long int var_12 = 6715660409457972408LL;
short var_13 = (short)-29291;
_Bool var_16 = (_Bool)1;
unsigned char var_19 = (unsigned char)28;
int zero = 0;
unsigned int var_20 = 4070813445U;
unsigned short var_21 = (unsigned short)15976;
short var_22 = (short)-14971;
short var_23 = (short)-19339;
signed char var_24 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
