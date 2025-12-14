#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14860;
unsigned char var_4 = (unsigned char)17;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 14683312040961303670ULL;
int zero = 0;
short var_15 = (short)20892;
unsigned int var_16 = 4057800533U;
short var_17 = (short)29737;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
