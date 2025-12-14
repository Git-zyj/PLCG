#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)110;
unsigned char var_12 = (unsigned char)22;
unsigned int var_16 = 3414178899U;
int zero = 0;
unsigned long long int var_19 = 5721350531792534119ULL;
short var_20 = (short)16880;
signed char var_21 = (signed char)124;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
