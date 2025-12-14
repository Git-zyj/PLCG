#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)23745;
unsigned int var_7 = 4205129609U;
long long int var_8 = -5218938192138242768LL;
unsigned long long int var_11 = 12551647601921539904ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)224;
signed char var_20 = (signed char)67;
unsigned int var_21 = 2247361343U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
