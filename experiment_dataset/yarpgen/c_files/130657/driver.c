#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15365;
unsigned int var_4 = 2442041791U;
signed char var_5 = (signed char)-20;
signed char var_7 = (signed char)-39;
unsigned int var_8 = 3045569840U;
unsigned char var_9 = (unsigned char)236;
int zero = 0;
signed char var_11 = (signed char)-32;
unsigned int var_12 = 3917594202U;
unsigned int var_13 = 4008922070U;
signed char var_14 = (signed char)104;
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
