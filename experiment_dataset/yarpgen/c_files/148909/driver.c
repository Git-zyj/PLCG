#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59492;
unsigned long long int var_4 = 16842878405434584314ULL;
long long int var_6 = 1239022057260832723LL;
signed char var_8 = (signed char)-23;
unsigned short var_10 = (unsigned short)25194;
unsigned long long int var_14 = 5655678765785578152ULL;
unsigned char var_15 = (unsigned char)121;
signed char var_16 = (signed char)28;
long long int var_17 = -4868820097811995168LL;
unsigned long long int var_19 = 5516800576827185038ULL;
int zero = 0;
short var_20 = (short)1926;
signed char var_21 = (signed char)-118;
unsigned int var_22 = 2152174820U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
