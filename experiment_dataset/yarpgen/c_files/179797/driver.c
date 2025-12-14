#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-106;
long long int var_11 = -7151986790912326077LL;
unsigned short var_12 = (unsigned short)22531;
int zero = 0;
unsigned long long int var_14 = 482571304857142550ULL;
unsigned char var_15 = (unsigned char)158;
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
