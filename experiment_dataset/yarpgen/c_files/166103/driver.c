#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
unsigned long long int var_1 = 11808024499919867113ULL;
unsigned short var_4 = (unsigned short)43683;
unsigned int var_5 = 2582975765U;
unsigned char var_6 = (unsigned char)39;
unsigned char var_7 = (unsigned char)205;
long long int var_10 = -8355297371700132895LL;
int zero = 0;
signed char var_11 = (signed char)61;
signed char var_12 = (signed char)-62;
unsigned short var_13 = (unsigned short)13028;
signed char var_14 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
