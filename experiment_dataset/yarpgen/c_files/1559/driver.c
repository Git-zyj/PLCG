#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1784895831;
unsigned char var_1 = (unsigned char)126;
signed char var_3 = (signed char)-50;
unsigned short var_6 = (unsigned short)4287;
unsigned long long int var_12 = 3133239133402232737ULL;
unsigned char var_14 = (unsigned char)65;
short var_15 = (short)-3345;
short var_18 = (short)-226;
int zero = 0;
short var_20 = (short)9449;
long long int var_21 = 5571479126911849841LL;
long long int var_22 = -412592097817294442LL;
unsigned short var_23 = (unsigned short)59518;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
