#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)1;
unsigned int var_8 = 21514304U;
long long int var_9 = 6263129461968933409LL;
signed char var_10 = (signed char)-102;
int zero = 0;
unsigned int var_16 = 2958127099U;
signed char var_17 = (signed char)117;
short var_18 = (short)-30136;
unsigned char var_19 = (unsigned char)47;
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
