#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15324;
unsigned int var_6 = 2078637731U;
unsigned char var_9 = (unsigned char)30;
signed char var_15 = (signed char)-120;
long long int var_16 = 8379001794820153114LL;
int zero = 0;
short var_18 = (short)26454;
short var_19 = (short)-10675;
short var_20 = (short)151;
void init() {
}

void checksum() {
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
