#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34796;
unsigned int var_4 = 2886747359U;
unsigned short var_5 = (unsigned short)57951;
long long int var_6 = 3980307971624714708LL;
unsigned int var_11 = 422079413U;
short var_14 = (short)-27190;
int zero = 0;
unsigned int var_16 = 4208303968U;
unsigned long long int var_17 = 10527178006546327982ULL;
unsigned int var_18 = 3461763603U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
