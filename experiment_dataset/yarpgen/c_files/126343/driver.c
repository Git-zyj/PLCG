#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7612590979886902963ULL;
unsigned long long int var_3 = 868754967149999952ULL;
signed char var_7 = (signed char)72;
short var_8 = (short)-26450;
unsigned long long int var_9 = 8594780309069158436ULL;
int zero = 0;
unsigned long long int var_10 = 2335141887134995317ULL;
signed char var_11 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
