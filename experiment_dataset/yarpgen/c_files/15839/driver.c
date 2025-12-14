#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34893;
unsigned long long int var_3 = 14270191929875881778ULL;
long long int var_4 = 881918005537805403LL;
int var_7 = 1226314184;
int zero = 0;
unsigned char var_11 = (unsigned char)106;
unsigned int var_12 = 1114383866U;
signed char var_13 = (signed char)-38;
unsigned int var_14 = 198518787U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
