#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-29;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1612943158U;
unsigned int var_9 = 211132182U;
short var_11 = (short)-5773;
int zero = 0;
unsigned char var_12 = (unsigned char)217;
long long int var_13 = 7312155572482778595LL;
unsigned short var_14 = (unsigned short)12040;
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
