#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)63;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 10113579076054570188ULL;
signed char var_3 = (signed char)111;
unsigned short var_10 = (unsigned short)220;
unsigned short var_12 = (unsigned short)30635;
unsigned short var_13 = (unsigned short)59546;
unsigned char var_18 = (unsigned char)73;
int zero = 0;
unsigned short var_19 = (unsigned short)7669;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
