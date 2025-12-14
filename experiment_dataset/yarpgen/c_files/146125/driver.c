#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-54;
unsigned long long int var_8 = 9869168253685221277ULL;
unsigned short var_15 = (unsigned short)54938;
int zero = 0;
unsigned char var_16 = (unsigned char)86;
long long int var_17 = -2424378381474383798LL;
unsigned char var_18 = (unsigned char)225;
unsigned int var_19 = 3436257506U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
