#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2270782517U;
unsigned char var_11 = (unsigned char)177;
int zero = 0;
unsigned long long int var_12 = 2354393999654699032ULL;
int var_13 = -1637238927;
unsigned int var_14 = 2147120184U;
signed char var_15 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
