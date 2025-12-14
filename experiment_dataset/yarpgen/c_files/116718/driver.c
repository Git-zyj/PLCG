#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -375040435;
signed char var_3 = (signed char)123;
short var_4 = (short)1192;
unsigned char var_5 = (unsigned char)172;
short var_6 = (short)-15368;
unsigned int var_8 = 2144309025U;
unsigned char var_9 = (unsigned char)97;
unsigned char var_11 = (unsigned char)90;
int zero = 0;
unsigned long long int var_16 = 5341313286429831699ULL;
unsigned int var_17 = 4258526119U;
short var_18 = (short)-18678;
_Bool var_19 = (_Bool)0;
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
