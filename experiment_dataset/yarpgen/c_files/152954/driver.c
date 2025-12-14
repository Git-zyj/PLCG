#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 748946057U;
unsigned short var_3 = (unsigned short)51565;
int var_7 = 1533539882;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 334728873U;
unsigned long long int var_11 = 4552932464950827084ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)21;
unsigned char var_13 = (unsigned char)110;
unsigned char var_14 = (unsigned char)66;
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
