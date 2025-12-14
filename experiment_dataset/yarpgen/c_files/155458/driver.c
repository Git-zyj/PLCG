#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)161;
unsigned char var_7 = (unsigned char)14;
short var_9 = (short)-13250;
unsigned short var_10 = (unsigned short)37080;
signed char var_11 = (signed char)74;
int zero = 0;
signed char var_12 = (signed char)-13;
unsigned short var_13 = (unsigned short)57717;
int var_14 = 2131618583;
long long int var_15 = -1292486309085404879LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
