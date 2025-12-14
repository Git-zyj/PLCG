#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16698;
signed char var_2 = (signed char)-8;
unsigned char var_3 = (unsigned char)39;
int var_4 = 989318419;
int var_8 = 1464466928;
signed char var_9 = (signed char)-118;
unsigned short var_11 = (unsigned short)40627;
int zero = 0;
unsigned long long int var_12 = 4828813720300237374ULL;
unsigned char var_13 = (unsigned char)178;
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
