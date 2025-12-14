#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
signed char var_1 = (signed char)44;
unsigned short var_3 = (unsigned short)32241;
signed char var_9 = (signed char)-110;
int zero = 0;
unsigned short var_15 = (unsigned short)60168;
signed char var_16 = (signed char)16;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
