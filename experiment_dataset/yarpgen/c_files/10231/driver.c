#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27763;
unsigned char var_2 = (unsigned char)93;
unsigned short var_6 = (unsigned short)42533;
unsigned int var_8 = 1703853460U;
int var_9 = -876038628;
signed char var_11 = (signed char)-13;
int zero = 0;
unsigned char var_12 = (unsigned char)188;
unsigned short var_13 = (unsigned short)22838;
unsigned char var_14 = (unsigned char)110;
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
