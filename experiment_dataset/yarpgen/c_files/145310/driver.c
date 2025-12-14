#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2073917464333999255LL;
long long int var_6 = 7371183508180523616LL;
long long int var_11 = -4137244533677156463LL;
int zero = 0;
unsigned int var_12 = 2543875251U;
signed char var_13 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
