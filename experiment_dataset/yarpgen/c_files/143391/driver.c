#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15484;
unsigned short var_3 = (unsigned short)34562;
signed char var_4 = (signed char)25;
signed char var_5 = (signed char)70;
signed char var_7 = (signed char)-102;
int var_11 = -689004084;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 503656047349244171ULL;
signed char var_16 = (signed char)50;
void init() {
}

void checksum() {
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
