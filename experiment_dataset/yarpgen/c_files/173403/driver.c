#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)46;
unsigned int var_4 = 2158532878U;
short var_5 = (short)12933;
signed char var_7 = (signed char)-22;
unsigned long long int var_9 = 15287044943387815651ULL;
unsigned char var_11 = (unsigned char)98;
signed char var_12 = (signed char)127;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = -479539899;
signed char var_15 = (signed char)-40;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
