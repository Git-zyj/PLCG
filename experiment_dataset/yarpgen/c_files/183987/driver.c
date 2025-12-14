#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)15920;
unsigned long long int var_16 = 926318726854813010ULL;
unsigned long long int var_19 = 3558073996015298066ULL;
int zero = 0;
short var_20 = (short)-6868;
short var_21 = (short)-2004;
signed char var_22 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
