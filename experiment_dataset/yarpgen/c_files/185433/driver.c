#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5025;
signed char var_3 = (signed char)-17;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)66;
long long int var_7 = -8566265994444202806LL;
unsigned char var_8 = (unsigned char)89;
unsigned int var_9 = 2052784142U;
int zero = 0;
signed char var_10 = (signed char)4;
int var_11 = 1133174210;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
