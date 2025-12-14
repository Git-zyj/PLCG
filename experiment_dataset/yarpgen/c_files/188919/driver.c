#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -959142635;
unsigned short var_3 = (unsigned short)14427;
long long int var_7 = -7119303793044316742LL;
unsigned int var_11 = 3223363925U;
int zero = 0;
unsigned char var_13 = (unsigned char)246;
signed char var_14 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
