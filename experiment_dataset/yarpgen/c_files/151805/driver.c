#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 714666940;
unsigned char var_2 = (unsigned char)125;
signed char var_4 = (signed char)-72;
unsigned short var_7 = (unsigned short)34370;
long long int var_9 = 4575204272928918137LL;
unsigned int var_10 = 1534152356U;
signed char var_11 = (signed char)75;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)35256;
unsigned char var_17 = (unsigned char)163;
unsigned int var_18 = 360343903U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
