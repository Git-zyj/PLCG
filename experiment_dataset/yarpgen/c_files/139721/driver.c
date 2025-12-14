#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3393461100U;
unsigned short var_1 = (unsigned short)63793;
unsigned int var_6 = 1149456943U;
unsigned long long int var_8 = 3317005292849464621ULL;
signed char var_10 = (signed char)-24;
int zero = 0;
unsigned long long int var_11 = 14590258319151356651ULL;
long long int var_12 = -3354083964623715840LL;
unsigned char var_13 = (unsigned char)163;
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
