#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)194;
short var_7 = (short)20823;
int var_8 = -405820650;
unsigned short var_10 = (unsigned short)8305;
unsigned long long int var_12 = 11011968326772914329ULL;
signed char var_15 = (signed char)-25;
unsigned char var_17 = (unsigned char)192;
int zero = 0;
signed char var_20 = (signed char)-23;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
