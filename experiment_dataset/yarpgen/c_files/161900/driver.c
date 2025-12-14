#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)24;
long long int var_1 = -4182182562829360101LL;
short var_2 = (short)-12319;
signed char var_3 = (signed char)121;
short var_4 = (short)-19737;
long long int var_7 = -1014679286413818452LL;
signed char var_8 = (signed char)-27;
signed char var_9 = (signed char)-83;
int zero = 0;
signed char var_10 = (signed char)-96;
short var_11 = (short)-6620;
unsigned char var_12 = (unsigned char)191;
signed char var_13 = (signed char)-122;
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
