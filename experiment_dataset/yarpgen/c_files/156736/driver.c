#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64232;
signed char var_3 = (signed char)-21;
_Bool var_7 = (_Bool)1;
unsigned long long int var_11 = 242817816092840279ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)86;
unsigned char var_18 = (unsigned char)186;
unsigned short var_19 = (unsigned short)57751;
unsigned char var_20 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
