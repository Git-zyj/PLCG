#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
signed char var_2 = (signed char)-11;
unsigned long long int var_3 = 2897456397838331953ULL;
signed char var_5 = (signed char)-75;
unsigned long long int var_7 = 1807452549031112152ULL;
int zero = 0;
long long int var_11 = 7869387040708354606LL;
unsigned long long int var_12 = 1311095591220273544ULL;
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
