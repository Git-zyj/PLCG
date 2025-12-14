#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2121981784U;
int var_2 = -761375782;
int var_3 = -13380367;
unsigned long long int var_4 = 15690791634161871801ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)79;
unsigned char var_7 = (unsigned char)20;
int var_8 = -55875127;
unsigned short var_9 = (unsigned short)5385;
unsigned int var_10 = 2391224259U;
unsigned short var_11 = (unsigned short)29267;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-20152;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
