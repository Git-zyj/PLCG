#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -380585700507771944LL;
unsigned int var_10 = 2314633538U;
unsigned short var_14 = (unsigned short)3755;
int var_17 = 405947164;
unsigned char var_18 = (unsigned char)188;
int zero = 0;
int var_20 = 714526348;
unsigned int var_21 = 1829986715U;
unsigned int var_22 = 3480046646U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
