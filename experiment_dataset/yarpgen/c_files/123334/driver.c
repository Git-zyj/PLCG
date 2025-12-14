#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2412494344U;
int var_4 = -629548957;
signed char var_7 = (signed char)-27;
_Bool var_9 = (_Bool)0;
unsigned int var_13 = 3862951492U;
int zero = 0;
unsigned int var_15 = 2705224200U;
int var_16 = -1704013720;
unsigned int var_17 = 1116751233U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
