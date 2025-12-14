#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2098695951U;
short var_10 = (short)-8671;
unsigned int var_11 = 2948035980U;
int zero = 0;
unsigned short var_19 = (unsigned short)25333;
long long int var_20 = 4795908077161317293LL;
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
