#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-109;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)52;
unsigned char var_7 = (unsigned char)143;
unsigned int var_9 = 3182861839U;
int var_10 = -72225475;
int zero = 0;
int var_11 = -2144595781;
int var_12 = 1459995290;
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
