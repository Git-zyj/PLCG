#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)106;
short var_4 = (short)20252;
unsigned int var_7 = 3948943002U;
signed char var_8 = (signed char)-7;
long long int var_9 = -7493249038208807304LL;
short var_10 = (short)-24930;
int zero = 0;
signed char var_12 = (signed char)-55;
signed char var_13 = (signed char)-109;
long long int var_14 = 3905028432454797990LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
