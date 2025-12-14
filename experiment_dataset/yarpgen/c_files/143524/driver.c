#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
unsigned char var_1 = (unsigned char)228;
signed char var_2 = (signed char)3;
unsigned short var_3 = (unsigned short)35588;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 12656867379597093707ULL;
unsigned short var_8 = (unsigned short)35848;
unsigned short var_9 = (unsigned short)23474;
int zero = 0;
unsigned char var_10 = (unsigned char)116;
short var_11 = (short)10110;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
