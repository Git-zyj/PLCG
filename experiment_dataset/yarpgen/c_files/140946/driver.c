#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1254818127;
unsigned long long int var_5 = 6152448981264733712ULL;
int var_6 = 1217715963;
unsigned short var_9 = (unsigned short)53975;
int zero = 0;
int var_10 = -239411984;
unsigned long long int var_11 = 7769060118206689785ULL;
int var_12 = -2121278550;
unsigned short var_13 = (unsigned short)58385;
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
