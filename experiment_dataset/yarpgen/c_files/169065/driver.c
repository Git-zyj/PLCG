#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4206130894500670134LL;
unsigned char var_4 = (unsigned char)203;
long long int var_5 = -6227765010668814233LL;
short var_8 = (short)-18963;
unsigned long long int var_12 = 4169821862689426182ULL;
unsigned long long int var_14 = 10188706187195608855ULL;
unsigned short var_15 = (unsigned short)54912;
int zero = 0;
long long int var_18 = 3125327717148137628LL;
short var_19 = (short)-13273;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
