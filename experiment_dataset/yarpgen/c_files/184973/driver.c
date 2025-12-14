#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
long long int var_2 = -7577839439270398064LL;
signed char var_14 = (signed char)-5;
unsigned char var_17 = (unsigned char)202;
unsigned char var_19 = (unsigned char)76;
int zero = 0;
long long int var_20 = 840700365076874016LL;
unsigned char var_21 = (unsigned char)24;
void init() {
}

void checksum() {
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
