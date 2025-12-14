#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14148531122947284412ULL;
unsigned int var_1 = 2434050851U;
short var_2 = (short)19498;
long long int var_3 = 8441960569931591928LL;
unsigned int var_4 = 215588356U;
unsigned long long int var_5 = 10736668019500376553ULL;
unsigned char var_7 = (unsigned char)142;
short var_10 = (short)-5964;
unsigned long long int var_14 = 999776754568870710ULL;
signed char var_16 = (signed char)-42;
signed char var_17 = (signed char)93;
int zero = 0;
short var_20 = (short)24263;
unsigned int var_21 = 3629155020U;
unsigned short var_22 = (unsigned short)33851;
int var_23 = -389145938;
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
