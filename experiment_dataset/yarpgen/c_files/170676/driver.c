#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)135;
short var_7 = (short)26768;
int zero = 0;
unsigned short var_15 = (unsigned short)275;
unsigned short var_16 = (unsigned short)62498;
unsigned int var_17 = 2905633875U;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-106;
unsigned short var_20 = (unsigned short)25792;
unsigned short var_21 = (unsigned short)35966;
long long int var_22 = -4215941327691955729LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
