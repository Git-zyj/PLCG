#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1932634876U;
signed char var_2 = (signed char)-123;
unsigned short var_6 = (unsigned short)27261;
long long int var_8 = -3349172370647932819LL;
short var_9 = (short)-31182;
int zero = 0;
unsigned char var_10 = (unsigned char)41;
unsigned short var_11 = (unsigned short)32684;
unsigned char var_12 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
