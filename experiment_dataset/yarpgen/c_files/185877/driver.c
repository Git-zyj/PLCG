#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13010;
unsigned int var_1 = 264695737U;
signed char var_2 = (signed char)-15;
unsigned short var_3 = (unsigned short)12370;
long long int var_4 = 8892601653474056063LL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-57;
unsigned short var_7 = (unsigned short)45340;
long long int var_8 = 7784982526220583463LL;
short var_9 = (short)-8681;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1504221908U;
int zero = 0;
unsigned int var_12 = 3644255859U;
signed char var_13 = (signed char)-75;
signed char var_14 = (signed char)51;
signed char var_15 = (signed char)105;
unsigned char var_16 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
