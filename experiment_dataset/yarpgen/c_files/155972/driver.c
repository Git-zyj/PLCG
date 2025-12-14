#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)26319;
unsigned int var_13 = 115995504U;
long long int var_14 = 6095119155541449234LL;
int zero = 0;
int var_16 = -2077595793;
unsigned short var_17 = (unsigned short)57949;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
