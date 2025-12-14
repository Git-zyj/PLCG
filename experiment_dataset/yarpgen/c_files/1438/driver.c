#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)224;
int var_4 = -2097020901;
signed char var_7 = (signed char)109;
unsigned int var_9 = 4209307757U;
int zero = 0;
unsigned int var_14 = 918634764U;
long long int var_15 = -7769693705102196634LL;
void init() {
}

void checksum() {
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
