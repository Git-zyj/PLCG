#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18293177345943163053ULL;
signed char var_2 = (signed char)5;
short var_8 = (short)20959;
long long int var_9 = 6922985343585696997LL;
int zero = 0;
unsigned char var_10 = (unsigned char)138;
signed char var_11 = (signed char)123;
unsigned long long int var_12 = 2899228357090942762ULL;
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
