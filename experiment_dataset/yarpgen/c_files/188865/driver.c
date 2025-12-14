#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -579508024;
_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)72;
unsigned char var_6 = (unsigned char)217;
long long int var_7 = 2737429643562980377LL;
unsigned int var_8 = 3110557087U;
int zero = 0;
unsigned char var_10 = (unsigned char)6;
unsigned short var_11 = (unsigned short)13662;
int var_12 = 941002674;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
