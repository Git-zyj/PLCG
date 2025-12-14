#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
signed char var_1 = (signed char)22;
unsigned long long int var_2 = 3883453068785578775ULL;
unsigned short var_3 = (unsigned short)47477;
unsigned char var_4 = (unsigned char)98;
unsigned long long int var_6 = 7967609443116746935ULL;
unsigned short var_8 = (unsigned short)7651;
unsigned int var_9 = 3171381461U;
int var_15 = 1714784184;
short var_16 = (short)24929;
int zero = 0;
unsigned char var_17 = (unsigned char)52;
unsigned int var_18 = 1288967887U;
unsigned short var_19 = (unsigned short)63294;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
