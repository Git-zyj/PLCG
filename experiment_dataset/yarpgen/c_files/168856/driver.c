#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)230;
short var_3 = (short)3361;
unsigned long long int var_4 = 18275529308569948577ULL;
unsigned long long int var_5 = 18211906860615270589ULL;
unsigned short var_6 = (unsigned short)38287;
unsigned int var_12 = 1516824922U;
short var_14 = (short)-27507;
signed char var_16 = (signed char)-13;
int zero = 0;
unsigned int var_19 = 664527971U;
short var_20 = (short)22636;
unsigned long long int var_21 = 669649215209357215ULL;
void init() {
}

void checksum() {
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
