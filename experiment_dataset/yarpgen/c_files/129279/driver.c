#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-28;
short var_3 = (short)14821;
unsigned short var_5 = (unsigned short)10191;
signed char var_7 = (signed char)-104;
signed char var_8 = (signed char)119;
unsigned long long int var_10 = 13011764769512254865ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)10870;
unsigned short var_12 = (unsigned short)29076;
long long int var_13 = -362154710087270639LL;
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
