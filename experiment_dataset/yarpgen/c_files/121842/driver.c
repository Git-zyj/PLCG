#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4059940742U;
unsigned short var_2 = (unsigned short)5815;
unsigned char var_4 = (unsigned char)130;
int var_8 = -1140349616;
unsigned int var_9 = 91677994U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 4917073959571830396ULL;
_Bool var_12 = (_Bool)1;
int var_13 = 586636717;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
