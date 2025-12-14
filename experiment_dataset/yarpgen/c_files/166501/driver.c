#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 869062136U;
int var_5 = 368524416;
int var_6 = -326619700;
long long int var_8 = 3275827910666250283LL;
unsigned char var_9 = (unsigned char)24;
int var_10 = 215380667;
unsigned char var_12 = (unsigned char)214;
unsigned short var_14 = (unsigned short)30388;
unsigned short var_16 = (unsigned short)65437;
_Bool var_17 = (_Bool)0;
long long int var_18 = 4558368881356714837LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 468656289U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
