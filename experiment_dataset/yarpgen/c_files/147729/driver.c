#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 193816022U;
signed char var_1 = (signed char)74;
unsigned short var_5 = (unsigned short)41598;
signed char var_6 = (signed char)6;
unsigned long long int var_9 = 12650970154980375191ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)202;
long long int var_12 = 8123735154221035789LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
