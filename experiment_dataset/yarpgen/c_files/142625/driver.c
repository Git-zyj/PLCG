#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8383924616769933238LL;
signed char var_3 = (signed char)-118;
unsigned char var_5 = (unsigned char)247;
short var_6 = (short)29273;
int var_8 = 1076396558;
signed char var_9 = (signed char)79;
int zero = 0;
signed char var_10 = (signed char)-61;
int var_11 = -1174436465;
unsigned char var_12 = (unsigned char)83;
int var_13 = 21641305;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
