#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7288442758051998639LL;
unsigned short var_2 = (unsigned short)29400;
int var_3 = -1899734891;
unsigned short var_7 = (unsigned short)24651;
signed char var_8 = (signed char)-23;
int var_9 = -1033384042;
unsigned char var_10 = (unsigned char)222;
int zero = 0;
long long int var_13 = -2015475050129206189LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)137;
signed char var_16 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
