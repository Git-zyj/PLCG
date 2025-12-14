#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)162;
_Bool var_7 = (_Bool)1;
long long int var_8 = -3280544881212557113LL;
unsigned char var_9 = (unsigned char)182;
int zero = 0;
short var_11 = (short)27371;
unsigned short var_12 = (unsigned short)13365;
int var_13 = -687686154;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
