#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
short var_1 = (short)-8338;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)27;
unsigned char var_4 = (unsigned char)150;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2249926073U;
short var_7 = (short)-9240;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)40545;
unsigned short var_11 = (unsigned short)25737;
int zero = 0;
unsigned char var_12 = (unsigned char)241;
unsigned char var_13 = (unsigned char)214;
unsigned short var_14 = (unsigned short)52993;
short var_15 = (short)28325;
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
