#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9293;
signed char var_3 = (signed char)-85;
signed char var_4 = (signed char)-96;
long long int var_5 = -4141919864180043242LL;
unsigned int var_9 = 597132869U;
short var_11 = (short)-27041;
unsigned short var_12 = (unsigned short)61087;
signed char var_15 = (signed char)124;
int var_16 = 882434177;
unsigned char var_18 = (unsigned char)179;
int zero = 0;
short var_19 = (short)-20212;
short var_20 = (short)-18805;
long long int var_21 = 119769528449792636LL;
unsigned int var_22 = 682236194U;
short var_23 = (short)-13489;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
