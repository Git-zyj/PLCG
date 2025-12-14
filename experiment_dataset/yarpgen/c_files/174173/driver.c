#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
unsigned char var_4 = (unsigned char)65;
unsigned int var_5 = 1725775445U;
unsigned int var_6 = 3573161889U;
signed char var_7 = (signed char)-82;
signed char var_8 = (signed char)113;
int var_9 = 559471671;
int zero = 0;
unsigned char var_19 = (unsigned char)220;
unsigned int var_20 = 2467362121U;
signed char var_21 = (signed char)-62;
unsigned int var_22 = 1833762909U;
void init() {
}

void checksum() {
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
