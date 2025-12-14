#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2727279491555250141LL;
unsigned int var_3 = 1126087829U;
signed char var_10 = (signed char)-8;
int zero = 0;
unsigned int var_20 = 580066111U;
long long int var_21 = -7604195896599194151LL;
short var_22 = (short)-27913;
signed char var_23 = (signed char)32;
unsigned char var_24 = (unsigned char)252;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
