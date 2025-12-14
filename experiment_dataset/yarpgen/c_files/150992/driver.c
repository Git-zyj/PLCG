#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)113;
unsigned int var_6 = 2879810939U;
unsigned long long int var_7 = 15434572167134175736ULL;
unsigned int var_8 = 3603476179U;
int var_18 = -450307930;
unsigned short var_19 = (unsigned short)15043;
int zero = 0;
unsigned long long int var_20 = 4502865840710742937ULL;
unsigned long long int var_21 = 16190978105045130224ULL;
unsigned char var_22 = (unsigned char)166;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
