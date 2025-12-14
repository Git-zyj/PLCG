#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13712418969153608389ULL;
unsigned int var_1 = 3872107099U;
unsigned long long int var_2 = 3665502219756422285ULL;
signed char var_6 = (signed char)75;
unsigned char var_11 = (unsigned char)9;
unsigned char var_13 = (unsigned char)201;
signed char var_14 = (signed char)70;
int zero = 0;
int var_18 = 1680316213;
long long int var_19 = -703249002519173428LL;
long long int var_20 = -301925586158960698LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
