#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
unsigned char var_1 = (unsigned char)194;
int var_5 = -1656432144;
unsigned short var_6 = (unsigned short)31313;
unsigned int var_7 = 859670845U;
long long int var_8 = -6913371229484230832LL;
unsigned char var_9 = (unsigned char)1;
long long int var_11 = -2494718427115558844LL;
int zero = 0;
long long int var_13 = -6060065688642225044LL;
unsigned char var_14 = (unsigned char)185;
signed char var_15 = (signed char)-114;
int var_16 = -1415100508;
short var_17 = (short)-23238;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
