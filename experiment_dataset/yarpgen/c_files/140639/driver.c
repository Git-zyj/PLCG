#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1845427091;
unsigned short var_10 = (unsigned short)57527;
short var_12 = (short)28829;
int zero = 0;
unsigned char var_18 = (unsigned char)38;
int var_19 = -967348592;
unsigned char var_20 = (unsigned char)102;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
