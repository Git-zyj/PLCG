#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6910300439992432330LL;
int var_5 = -694529015;
unsigned long long int var_11 = 2200848710573618920ULL;
unsigned char var_15 = (unsigned char)135;
signed char var_17 = (signed char)-40;
int zero = 0;
unsigned long long int var_18 = 885893867486245143ULL;
long long int var_19 = 3899515282698985177LL;
int var_20 = 1602195107;
signed char var_21 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
