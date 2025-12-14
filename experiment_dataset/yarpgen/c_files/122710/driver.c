#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28385;
unsigned char var_1 = (unsigned char)79;
unsigned short var_3 = (unsigned short)60820;
unsigned int var_4 = 3898503390U;
unsigned short var_8 = (unsigned short)15276;
unsigned char var_9 = (unsigned char)183;
int zero = 0;
unsigned short var_10 = (unsigned short)34015;
_Bool var_11 = (_Bool)0;
long long int var_12 = 2674631723829866211LL;
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
