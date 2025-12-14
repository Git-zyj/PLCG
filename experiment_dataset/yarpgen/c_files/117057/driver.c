#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15073;
unsigned short var_1 = (unsigned short)13372;
unsigned short var_2 = (unsigned short)28557;
unsigned char var_3 = (unsigned char)89;
_Bool var_5 = (_Bool)0;
long long int var_7 = -508655421026056827LL;
long long int var_10 = -1874383856043607917LL;
int zero = 0;
unsigned short var_12 = (unsigned short)43423;
short var_13 = (short)16890;
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
