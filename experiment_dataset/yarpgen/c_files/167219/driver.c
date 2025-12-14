#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -1414955260282939498LL;
long long int var_9 = -7587613089937923503LL;
signed char var_13 = (signed char)-40;
int zero = 0;
unsigned short var_14 = (unsigned short)33084;
unsigned char var_15 = (unsigned char)194;
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
