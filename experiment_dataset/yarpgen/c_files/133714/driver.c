#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4092233119559798832LL;
short var_12 = (short)-20098;
short var_13 = (short)9731;
int zero = 0;
signed char var_20 = (signed char)98;
unsigned int var_21 = 1606618845U;
unsigned short var_22 = (unsigned short)38632;
signed char var_23 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
