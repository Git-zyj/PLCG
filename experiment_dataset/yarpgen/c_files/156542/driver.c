#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2719686216700659217LL;
signed char var_7 = (signed char)-125;
int var_8 = 911143914;
unsigned char var_9 = (unsigned char)136;
int zero = 0;
unsigned char var_10 = (unsigned char)165;
int var_11 = -946336555;
short var_12 = (short)-14685;
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
