#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11000486654906426450ULL;
unsigned int var_2 = 1317650549U;
unsigned short var_4 = (unsigned short)11164;
int var_6 = 911623057;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)30575;
unsigned char var_11 = (unsigned char)104;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-16120;
void init() {
}

void checksum() {
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
