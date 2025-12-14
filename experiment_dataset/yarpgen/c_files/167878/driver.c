#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = -436115573;
unsigned char var_4 = (unsigned char)219;
unsigned short var_7 = (unsigned short)51680;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 2631816975U;
unsigned char var_21 = (unsigned char)81;
_Bool var_22 = (_Bool)1;
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
