#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13320;
unsigned long long int var_2 = 15438650791656275696ULL;
long long int var_5 = 6645103292615045104LL;
long long int var_8 = -7316975053370507289LL;
unsigned short var_10 = (unsigned short)26587;
long long int var_12 = 537070957419554355LL;
short var_16 = (short)13390;
int zero = 0;
int var_18 = 469157760;
signed char var_19 = (signed char)11;
unsigned long long int var_20 = 13615578344003778754ULL;
unsigned long long int var_21 = 17887901536318697635ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
