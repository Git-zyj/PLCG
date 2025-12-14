#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
signed char var_5 = (signed char)-74;
short var_7 = (short)26095;
signed char var_8 = (signed char)-98;
short var_11 = (short)18717;
unsigned short var_12 = (unsigned short)42547;
unsigned long long int var_13 = 14973660420069950262ULL;
unsigned char var_14 = (unsigned char)225;
int zero = 0;
long long int var_15 = -5733455225867344440LL;
short var_16 = (short)21075;
unsigned short var_17 = (unsigned short)44286;
unsigned char var_18 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
