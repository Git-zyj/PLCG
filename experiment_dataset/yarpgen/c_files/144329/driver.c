#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19954;
int var_1 = 1333037083;
int var_2 = -706395710;
long long int var_6 = -313469783489885571LL;
unsigned short var_8 = (unsigned short)1812;
signed char var_11 = (signed char)122;
signed char var_13 = (signed char)-121;
unsigned short var_16 = (unsigned short)30968;
int zero = 0;
unsigned int var_19 = 4177105298U;
signed char var_20 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
