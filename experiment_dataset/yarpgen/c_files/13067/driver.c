#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 679436726U;
signed char var_2 = (signed char)-98;
unsigned long long int var_4 = 623084174778796480ULL;
signed char var_6 = (signed char)(-127 - 1);
short var_7 = (short)-27271;
signed char var_9 = (signed char)-52;
unsigned long long int var_10 = 2312535195165370982ULL;
int zero = 0;
unsigned int var_11 = 214412060U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 891757273341073274ULL;
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
