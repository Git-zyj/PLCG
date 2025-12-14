#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
unsigned int var_3 = 687793852U;
unsigned int var_5 = 1211780738U;
unsigned char var_6 = (unsigned char)225;
int var_7 = 1329319907;
unsigned int var_9 = 3366965936U;
int zero = 0;
long long int var_11 = -4377218640081961792LL;
unsigned char var_12 = (unsigned char)29;
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
