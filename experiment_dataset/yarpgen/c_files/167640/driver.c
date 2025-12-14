#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6774169675013799301LL;
unsigned char var_2 = (unsigned char)176;
unsigned short var_12 = (unsigned short)21079;
unsigned int var_14 = 1482280597U;
int zero = 0;
long long int var_19 = -7350167780479059673LL;
unsigned char var_20 = (unsigned char)146;
signed char var_21 = (signed char)-121;
unsigned int var_22 = 1415920081U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
