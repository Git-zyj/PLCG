#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)189;
signed char var_1 = (signed char)-47;
unsigned int var_2 = 4144159664U;
long long int var_4 = 7814877266911015465LL;
int var_6 = -321474394;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)119;
int zero = 0;
signed char var_15 = (signed char)-96;
unsigned short var_16 = (unsigned short)22594;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
