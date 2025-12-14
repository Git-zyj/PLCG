#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8346179346674851703LL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)4984;
signed char var_6 = (signed char)-5;
int var_8 = 427958188;
int zero = 0;
unsigned short var_12 = (unsigned short)59475;
short var_13 = (short)6971;
unsigned char var_14 = (unsigned char)75;
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
