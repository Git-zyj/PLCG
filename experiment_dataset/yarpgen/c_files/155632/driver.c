#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10601042277883719482ULL;
signed char var_5 = (signed char)32;
unsigned short var_8 = (unsigned short)25470;
signed char var_9 = (signed char)112;
unsigned short var_10 = (unsigned short)50968;
unsigned long long int var_13 = 3197641236928144867ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-121;
void init() {
}

void checksum() {
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
