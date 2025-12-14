#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)12;
unsigned short var_1 = (unsigned short)30176;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-13980;
int var_5 = 411952675;
long long int var_6 = 8857373328318889784LL;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-14462;
unsigned char var_9 = (unsigned char)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 226308343;
unsigned char var_12 = (unsigned char)214;
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
