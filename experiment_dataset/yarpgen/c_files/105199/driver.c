#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-8;
long long int var_5 = -1422036975530645397LL;
signed char var_6 = (signed char)-127;
unsigned char var_9 = (unsigned char)192;
int zero = 0;
signed char var_12 = (signed char)-78;
unsigned char var_13 = (unsigned char)15;
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
