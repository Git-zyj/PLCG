#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)53;
unsigned short var_3 = (unsigned short)49219;
unsigned long long int var_6 = 11419673460264275965ULL;
unsigned int var_9 = 4074971856U;
unsigned int var_10 = 2512548594U;
int zero = 0;
long long int var_13 = 7609483679419341908LL;
unsigned long long int var_14 = 2135741695552010798ULL;
unsigned int var_15 = 1801857356U;
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
