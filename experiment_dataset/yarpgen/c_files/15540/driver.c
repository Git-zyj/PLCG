#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4193415064U;
unsigned int var_3 = 3631543545U;
signed char var_4 = (signed char)13;
unsigned int var_6 = 2001431322U;
unsigned char var_11 = (unsigned char)35;
unsigned char var_13 = (unsigned char)117;
signed char var_14 = (signed char)-14;
int zero = 0;
short var_16 = (short)9465;
unsigned int var_17 = 1426490450U;
unsigned char var_18 = (unsigned char)85;
unsigned int var_19 = 734299343U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
