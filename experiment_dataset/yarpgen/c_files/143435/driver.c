#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)39;
unsigned char var_4 = (unsigned char)195;
unsigned char var_7 = (unsigned char)47;
unsigned int var_10 = 4131159802U;
int zero = 0;
int var_11 = -256201239;
signed char var_12 = (signed char)-25;
int var_13 = -1066962912;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
