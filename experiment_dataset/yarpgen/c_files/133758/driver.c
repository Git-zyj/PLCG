#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)58;
unsigned short var_5 = (unsigned short)24859;
short var_13 = (short)26273;
signed char var_16 = (signed char)-121;
int zero = 0;
short var_19 = (short)27349;
long long int var_20 = 4704314377505718748LL;
void init() {
}

void checksum() {
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
