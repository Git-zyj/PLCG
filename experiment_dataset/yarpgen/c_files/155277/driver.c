#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-28;
long long int var_9 = 4526411442174995783LL;
unsigned int var_11 = 2755196627U;
signed char var_16 = (signed char)6;
int zero = 0;
long long int var_18 = 286144260710350712LL;
signed char var_19 = (signed char)-114;
unsigned char var_20 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
