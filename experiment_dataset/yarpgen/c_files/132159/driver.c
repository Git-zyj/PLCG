#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
short var_1 = (short)-26392;
unsigned short var_3 = (unsigned short)19915;
unsigned long long int var_4 = 5806112867499266432ULL;
signed char var_5 = (signed char)50;
unsigned short var_8 = (unsigned short)49540;
unsigned int var_12 = 2124510627U;
unsigned long long int var_13 = 10202938595630449117ULL;
unsigned long long int var_16 = 281657618350625198ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)11915;
_Bool var_18 = (_Bool)0;
int var_19 = 768757363;
unsigned long long int var_20 = 16380644208384735921ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
