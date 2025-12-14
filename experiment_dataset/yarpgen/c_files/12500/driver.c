#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)1950;
unsigned short var_9 = (unsigned short)5375;
int var_10 = -1053252281;
short var_12 = (short)20654;
int zero = 0;
unsigned char var_20 = (unsigned char)244;
unsigned long long int var_21 = 12879806976878182077ULL;
unsigned int var_22 = 3585216962U;
int var_23 = 301132151;
unsigned short var_24 = (unsigned short)31666;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
