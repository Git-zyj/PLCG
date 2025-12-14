#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-54;
short var_2 = (short)10770;
unsigned char var_3 = (unsigned char)248;
unsigned long long int var_4 = 4327023032051693766ULL;
int var_5 = 824613793;
signed char var_6 = (signed char)-99;
unsigned char var_7 = (unsigned char)61;
long long int var_8 = -4846162163619750178LL;
long long int var_9 = -6390335686026396380LL;
short var_10 = (short)-10603;
int zero = 0;
int var_13 = 1051106816;
unsigned short var_14 = (unsigned short)24624;
int var_15 = -456041970;
unsigned short var_16 = (unsigned short)44625;
signed char var_17 = (signed char)26;
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
