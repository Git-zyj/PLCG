#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-79;
unsigned short var_3 = (unsigned short)23177;
unsigned long long int var_4 = 4232111905078484332ULL;
unsigned char var_5 = (unsigned char)196;
_Bool var_8 = (_Bool)0;
unsigned char var_17 = (unsigned char)42;
int zero = 0;
unsigned char var_18 = (unsigned char)99;
signed char var_19 = (signed char)100;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
