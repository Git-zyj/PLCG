#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2096;
long long int var_2 = -8255573450304508264LL;
unsigned char var_4 = (unsigned char)66;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)48;
short var_9 = (short)15845;
short var_11 = (short)-1102;
int zero = 0;
unsigned char var_12 = (unsigned char)250;
signed char var_13 = (signed char)53;
unsigned long long int var_14 = 16978253219236226943ULL;
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
