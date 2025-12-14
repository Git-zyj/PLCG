#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3474;
unsigned char var_3 = (unsigned char)237;
_Bool var_8 = (_Bool)0;
unsigned int var_11 = 3206417747U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)44925;
_Bool var_19 = (_Bool)1;
long long int var_20 = 206661448612086522LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
