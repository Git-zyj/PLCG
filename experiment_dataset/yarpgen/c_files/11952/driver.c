#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -831287192;
int var_2 = -70498091;
signed char var_7 = (signed char)120;
int zero = 0;
signed char var_10 = (signed char)-76;
unsigned char var_11 = (unsigned char)121;
signed char var_12 = (signed char)118;
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
