#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)146;
int var_3 = -412373359;
unsigned char var_4 = (unsigned char)143;
signed char var_5 = (signed char)78;
int var_7 = -1046683032;
unsigned long long int var_8 = 7469675912201890898ULL;
short var_10 = (short)3190;
signed char var_12 = (signed char)-120;
short var_15 = (short)787;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-12;
unsigned int var_20 = 1253930716U;
signed char var_21 = (signed char)106;
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
