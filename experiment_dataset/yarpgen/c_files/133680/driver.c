#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8743326759521468104LL;
unsigned int var_6 = 817541149U;
unsigned short var_8 = (unsigned short)5066;
int zero = 0;
unsigned char var_20 = (unsigned char)202;
unsigned short var_21 = (unsigned short)20085;
int var_22 = 1214312097;
void init() {
}

void checksum() {
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
