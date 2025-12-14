#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2474265910470403392ULL;
signed char var_2 = (signed char)-74;
signed char var_3 = (signed char)-14;
short var_4 = (short)9550;
unsigned int var_5 = 1341904940U;
unsigned short var_6 = (unsigned short)16192;
signed char var_8 = (signed char)4;
unsigned char var_9 = (unsigned char)19;
short var_11 = (short)4954;
signed char var_12 = (signed char)121;
short var_13 = (short)-5156;
int zero = 0;
short var_14 = (short)-14191;
short var_15 = (short)-22939;
signed char var_16 = (signed char)-110;
signed char var_17 = (signed char)-113;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
