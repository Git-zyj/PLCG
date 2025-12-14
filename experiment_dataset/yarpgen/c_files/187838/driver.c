#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)48907;
unsigned int var_5 = 640095618U;
long long int var_8 = -951901272829485109LL;
int zero = 0;
unsigned int var_17 = 1664032516U;
unsigned char var_18 = (unsigned char)192;
short var_19 = (short)15711;
signed char var_20 = (signed char)-23;
unsigned long long int var_21 = 7314597586363198416ULL;
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
