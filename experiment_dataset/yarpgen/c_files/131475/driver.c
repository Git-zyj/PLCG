#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12843;
unsigned short var_1 = (unsigned short)11557;
int var_2 = -1223093922;
short var_5 = (short)32541;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)162;
int zero = 0;
unsigned long long int var_14 = 5689724626385474961ULL;
unsigned int var_15 = 3053252138U;
void init() {
}

void checksum() {
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
