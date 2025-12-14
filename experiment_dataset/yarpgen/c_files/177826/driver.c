#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1039197552898870202LL;
unsigned short var_1 = (unsigned short)9618;
long long int var_2 = -411908268717138168LL;
unsigned long long int var_3 = 2252969408621682315ULL;
signed char var_4 = (signed char)46;
short var_5 = (short)26211;
signed char var_6 = (signed char)69;
short var_7 = (short)23240;
signed char var_8 = (signed char)-107;
unsigned short var_11 = (unsigned short)59486;
int zero = 0;
long long int var_13 = 6364318132253292629LL;
short var_14 = (short)-24344;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)27597;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
