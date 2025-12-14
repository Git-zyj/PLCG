#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50292;
unsigned int var_2 = 3225078651U;
unsigned short var_8 = (unsigned short)23728;
unsigned int var_10 = 3232828867U;
unsigned short var_12 = (unsigned short)815;
signed char var_13 = (signed char)-63;
long long int var_15 = -1720239692596660267LL;
unsigned short var_16 = (unsigned short)61921;
long long int var_17 = 5522964545393330826LL;
int zero = 0;
long long int var_19 = -107013570536467422LL;
long long int var_20 = 6400069864399619028LL;
void init() {
}

void checksum() {
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
