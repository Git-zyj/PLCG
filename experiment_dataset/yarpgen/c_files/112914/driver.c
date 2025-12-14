#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27859;
int var_5 = 245869470;
int zero = 0;
long long int var_14 = -2945639725214713781LL;
unsigned char var_15 = (unsigned char)220;
unsigned int var_16 = 2542354015U;
signed char var_17 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
