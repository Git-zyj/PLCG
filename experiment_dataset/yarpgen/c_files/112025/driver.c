#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1551205815;
unsigned int var_5 = 808076590U;
signed char var_6 = (signed char)-34;
int zero = 0;
long long int var_13 = -4628402887859545972LL;
short var_14 = (short)-23806;
unsigned char var_15 = (unsigned char)121;
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
