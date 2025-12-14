#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
unsigned short var_2 = (unsigned short)32239;
unsigned char var_3 = (unsigned char)47;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)2837;
unsigned char var_7 = (unsigned char)29;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)136;
int var_11 = -1764685513;
int zero = 0;
short var_12 = (short)-123;
long long int var_13 = 3458099499767549049LL;
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
