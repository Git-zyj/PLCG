#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)0;
short var_7 = (short)23485;
unsigned short var_10 = (unsigned short)48904;
int zero = 0;
unsigned short var_13 = (unsigned short)42479;
signed char var_14 = (signed char)121;
unsigned long long int var_15 = 16651785415361609022ULL;
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
