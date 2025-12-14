#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11934964109379357715ULL;
int var_1 = 1606556293;
unsigned char var_3 = (unsigned char)96;
short var_4 = (short)22177;
short var_6 = (short)6828;
unsigned int var_8 = 3306682622U;
unsigned int var_10 = 1466647206U;
int zero = 0;
signed char var_17 = (signed char)-102;
short var_18 = (short)25312;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
