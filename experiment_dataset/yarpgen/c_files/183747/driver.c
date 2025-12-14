#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9834;
signed char var_2 = (signed char)-62;
int var_4 = 2043160497;
unsigned long long int var_5 = 11082722234408887411ULL;
long long int var_11 = -2032343741159976077LL;
unsigned int var_12 = 2899208121U;
unsigned short var_14 = (unsigned short)22744;
int zero = 0;
unsigned char var_20 = (unsigned char)60;
unsigned short var_21 = (unsigned short)37176;
signed char var_22 = (signed char)77;
int var_23 = -819918485;
void init() {
}

void checksum() {
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
