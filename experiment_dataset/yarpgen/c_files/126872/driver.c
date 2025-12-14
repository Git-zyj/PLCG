#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2824685888U;
unsigned short var_5 = (unsigned short)17683;
signed char var_6 = (signed char)25;
signed char var_7 = (signed char)28;
int zero = 0;
long long int var_12 = -9209286362692682830LL;
unsigned char var_13 = (unsigned char)27;
unsigned char var_14 = (unsigned char)6;
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
