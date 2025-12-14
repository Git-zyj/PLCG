#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-3248;
short var_7 = (short)-23145;
signed char var_10 = (signed char)6;
signed char var_12 = (signed char)-10;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)151;
int var_17 = 51105336;
short var_19 = (short)7873;
int zero = 0;
unsigned int var_20 = 2406826744U;
long long int var_21 = 8561010180098810725LL;
void init() {
}

void checksum() {
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
