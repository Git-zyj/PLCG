#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13291;
long long int var_3 = 7498655698326887296LL;
unsigned short var_4 = (unsigned short)60440;
unsigned long long int var_6 = 977611817192737444ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)2480;
int zero = 0;
long long int var_15 = 3740365361520796539LL;
unsigned short var_16 = (unsigned short)19748;
_Bool var_17 = (_Bool)0;
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
