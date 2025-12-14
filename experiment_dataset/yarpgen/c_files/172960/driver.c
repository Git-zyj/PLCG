#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3627637594U;
long long int var_7 = 5639003947685140436LL;
unsigned char var_11 = (unsigned char)39;
signed char var_12 = (signed char)-1;
int zero = 0;
unsigned char var_13 = (unsigned char)208;
long long int var_14 = -9051986941363100214LL;
void init() {
}

void checksum() {
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
