#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)29;
signed char var_4 = (signed char)-93;
unsigned short var_6 = (unsigned short)57558;
long long int var_9 = -347898335529773889LL;
long long int var_15 = -7039803636630437810LL;
int zero = 0;
signed char var_17 = (signed char)-92;
signed char var_18 = (signed char)73;
unsigned char var_19 = (unsigned char)250;
void init() {
}

void checksum() {
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
