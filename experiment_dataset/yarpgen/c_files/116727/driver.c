#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)34;
unsigned int var_6 = 109905283U;
signed char var_7 = (signed char)-2;
int zero = 0;
unsigned long long int var_12 = 2236080023196226685ULL;
unsigned long long int var_13 = 11594883842534776363ULL;
unsigned int var_14 = 3186086129U;
signed char var_15 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
