#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)81;
signed char var_6 = (signed char)-74;
short var_8 = (short)9065;
short var_16 = (short)14682;
unsigned long long int var_18 = 9166639857220334731ULL;
int zero = 0;
short var_19 = (short)24312;
unsigned long long int var_20 = 11479151549990743533ULL;
signed char var_21 = (signed char)-49;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
