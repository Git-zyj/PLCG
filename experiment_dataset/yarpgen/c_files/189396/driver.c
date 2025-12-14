#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)79;
unsigned short var_4 = (unsigned short)61064;
int var_6 = 1203804987;
unsigned short var_8 = (unsigned short)57493;
short var_9 = (short)26917;
unsigned long long int var_10 = 12383006636475146514ULL;
unsigned int var_11 = 3100044278U;
int zero = 0;
long long int var_13 = -1851306101825696607LL;
unsigned short var_14 = (unsigned short)11059;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
