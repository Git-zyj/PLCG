#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13480757387774366902ULL;
unsigned char var_1 = (unsigned char)32;
unsigned short var_3 = (unsigned short)42412;
int var_5 = -114902882;
unsigned long long int var_6 = 10183845698393158925ULL;
unsigned char var_8 = (unsigned char)17;
unsigned long long int var_10 = 14105729560504234767ULL;
unsigned int var_12 = 1638809182U;
int zero = 0;
unsigned long long int var_15 = 4440964480306496595ULL;
unsigned char var_16 = (unsigned char)52;
long long int var_17 = -1888677580186737881LL;
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
