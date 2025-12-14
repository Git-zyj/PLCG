#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1446876773U;
signed char var_6 = (signed char)-24;
int var_9 = -568991767;
unsigned char var_10 = (unsigned char)71;
int zero = 0;
unsigned char var_18 = (unsigned char)189;
signed char var_19 = (signed char)37;
unsigned int var_20 = 2067030564U;
int var_21 = -372631992;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
