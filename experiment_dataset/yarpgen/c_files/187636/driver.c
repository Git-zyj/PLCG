#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8544629882845965297LL;
unsigned char var_1 = (unsigned char)191;
unsigned short var_3 = (unsigned short)25029;
unsigned short var_5 = (unsigned short)60893;
unsigned short var_7 = (unsigned short)45471;
int zero = 0;
signed char var_12 = (signed char)-18;
int var_13 = -1408343281;
long long int var_14 = 3660205161099204160LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
