#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
long long int var_1 = 4067003973358149288LL;
signed char var_2 = (signed char)-103;
unsigned int var_6 = 2992255200U;
unsigned short var_7 = (unsigned short)30822;
int var_8 = 907663515;
int var_9 = -485117929;
unsigned char var_10 = (unsigned char)151;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 293317865;
unsigned short var_13 = (unsigned short)6192;
unsigned long long int var_14 = 15237764441499389733ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
