#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 121679454U;
unsigned long long int var_2 = 2205497782845236420ULL;
signed char var_3 = (signed char)-82;
signed char var_4 = (signed char)37;
int var_6 = 396168952;
unsigned long long int var_9 = 8660847888251404501ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)66;
unsigned short var_17 = (unsigned short)16003;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
