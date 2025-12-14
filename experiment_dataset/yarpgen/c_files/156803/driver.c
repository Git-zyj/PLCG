#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5900653597158141383LL;
unsigned char var_1 = (unsigned char)209;
int var_2 = 69857829;
unsigned int var_4 = 3006765023U;
unsigned short var_7 = (unsigned short)54820;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)31575;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)13651;
int zero = 0;
unsigned int var_12 = 1753818795U;
unsigned short var_13 = (unsigned short)40434;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
