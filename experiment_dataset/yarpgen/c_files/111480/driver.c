#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-126;
unsigned short var_3 = (unsigned short)15786;
unsigned short var_6 = (unsigned short)29615;
long long int var_7 = -7156080790712294794LL;
signed char var_9 = (signed char)44;
long long int var_13 = 2535601867544218216LL;
int zero = 0;
unsigned long long int var_18 = 9956391876798890544ULL;
int var_19 = -1359375614;
void init() {
}

void checksum() {
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
