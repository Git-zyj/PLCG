#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 238420641U;
short var_3 = (short)-22903;
unsigned int var_5 = 268605009U;
unsigned char var_7 = (unsigned char)52;
unsigned long long int var_9 = 5104691455344698783ULL;
unsigned char var_10 = (unsigned char)166;
int zero = 0;
unsigned char var_11 = (unsigned char)221;
long long int var_12 = -4077967299283883019LL;
short var_13 = (short)-360;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
