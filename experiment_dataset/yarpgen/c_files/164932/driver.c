#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1175719834;
short var_1 = (short)20610;
unsigned char var_2 = (unsigned char)127;
signed char var_5 = (signed char)2;
unsigned short var_7 = (unsigned short)24381;
_Bool var_9 = (_Bool)1;
long long int var_10 = -1290848269479709172LL;
int zero = 0;
short var_11 = (short)-3737;
int var_12 = 769300697;
unsigned short var_13 = (unsigned short)52566;
void init() {
}

void checksum() {
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
