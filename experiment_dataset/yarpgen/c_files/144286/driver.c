#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-50;
unsigned char var_4 = (unsigned char)150;
int var_6 = 1971482823;
unsigned char var_8 = (unsigned char)95;
signed char var_9 = (signed char)-45;
int var_14 = -1500989042;
unsigned short var_16 = (unsigned short)16406;
int zero = 0;
short var_17 = (short)-28624;
short var_18 = (short)6468;
short var_19 = (short)-27026;
long long int var_20 = 8248263858737186523LL;
unsigned int var_21 = 2739209732U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
