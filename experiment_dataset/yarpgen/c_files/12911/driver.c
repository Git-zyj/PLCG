#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)59;
signed char var_2 = (signed char)-66;
unsigned long long int var_11 = 14567908631887680412ULL;
signed char var_13 = (signed char)95;
unsigned short var_19 = (unsigned short)63492;
int zero = 0;
unsigned char var_20 = (unsigned char)76;
long long int var_21 = 5446077653746157569LL;
unsigned long long int var_22 = 4199360198747919570ULL;
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
