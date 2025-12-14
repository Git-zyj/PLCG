#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)165;
unsigned int var_5 = 1233254014U;
unsigned short var_8 = (unsigned short)1218;
long long int var_9 = -5848611513315343024LL;
signed char var_10 = (signed char)46;
int zero = 0;
signed char var_12 = (signed char)79;
unsigned long long int var_13 = 636981477359230843ULL;
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
