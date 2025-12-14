#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3705368014U;
long long int var_4 = 7521655846357677329LL;
short var_6 = (short)5714;
int zero = 0;
signed char var_10 = (signed char)-54;
int var_11 = -1099287025;
long long int var_12 = 3551962344650351167LL;
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
