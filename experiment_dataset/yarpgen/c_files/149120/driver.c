#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6485491704490137926ULL;
unsigned int var_6 = 3541795229U;
unsigned short var_9 = (unsigned short)56267;
int zero = 0;
unsigned short var_12 = (unsigned short)6394;
unsigned int var_13 = 3453201738U;
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
