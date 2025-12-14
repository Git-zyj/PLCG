#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4885;
unsigned char var_5 = (unsigned char)148;
short var_7 = (short)14334;
signed char var_9 = (signed char)50;
int zero = 0;
signed char var_10 = (signed char)-125;
long long int var_11 = -1713396260413180871LL;
unsigned int var_12 = 3732462356U;
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
