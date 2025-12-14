#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3850993208U;
signed char var_4 = (signed char)119;
unsigned long long int var_7 = 15841910292763125277ULL;
signed char var_9 = (signed char)-32;
int zero = 0;
long long int var_10 = 8379885928547016514LL;
unsigned char var_11 = (unsigned char)87;
unsigned short var_12 = (unsigned short)5599;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
