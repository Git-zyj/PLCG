#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)157;
short var_5 = (short)-19013;
unsigned int var_7 = 3265490203U;
signed char var_15 = (signed char)-62;
unsigned char var_16 = (unsigned char)230;
int zero = 0;
int var_18 = 1995933303;
short var_19 = (short)7879;
short var_20 = (short)-1905;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)58977;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
