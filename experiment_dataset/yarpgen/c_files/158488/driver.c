#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-49;
unsigned int var_3 = 2368979456U;
long long int var_5 = -6800095872078016713LL;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)183;
int zero = 0;
short var_11 = (short)-8062;
short var_12 = (short)-5893;
void init() {
}

void checksum() {
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
