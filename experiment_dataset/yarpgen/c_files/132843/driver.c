#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8069653462885164155LL;
unsigned long long int var_6 = 13320047038698110046ULL;
unsigned char var_10 = (unsigned char)7;
int zero = 0;
int var_11 = 668203193;
unsigned short var_12 = (unsigned short)19439;
signed char var_13 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
