#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)93;
short var_1 = (short)-13579;
long long int var_2 = -2083621257856795974LL;
unsigned char var_3 = (unsigned char)95;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)134;
signed char var_8 = (signed char)-46;
short var_9 = (short)7990;
int zero = 0;
unsigned short var_10 = (unsigned short)62373;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)44449;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
