#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
signed char var_2 = (signed char)74;
unsigned long long int var_3 = 13434260087089111555ULL;
short var_6 = (short)24019;
unsigned int var_8 = 4267650273U;
unsigned char var_9 = (unsigned char)84;
unsigned short var_10 = (unsigned short)34402;
signed char var_12 = (signed char)-125;
short var_13 = (short)16182;
int zero = 0;
unsigned char var_15 = (unsigned char)124;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)22;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
