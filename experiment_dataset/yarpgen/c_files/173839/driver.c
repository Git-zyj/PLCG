#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-86;
unsigned long long int var_5 = 9539668230498030251ULL;
unsigned long long int var_6 = 8895850317322343996ULL;
unsigned char var_7 = (unsigned char)199;
unsigned short var_9 = (unsigned short)59105;
unsigned long long int var_10 = 2931506854585777507ULL;
unsigned short var_11 = (unsigned short)64901;
int zero = 0;
signed char var_17 = (signed char)-11;
unsigned long long int var_18 = 1612594590553571928ULL;
void init() {
}

void checksum() {
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
