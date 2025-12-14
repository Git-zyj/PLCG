#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 755095192538318776LL;
unsigned short var_9 = (unsigned short)55903;
signed char var_12 = (signed char)-55;
int zero = 0;
long long int var_15 = -269554820121046873LL;
signed char var_16 = (signed char)55;
unsigned char var_17 = (unsigned char)223;
void init() {
}

void checksum() {
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
