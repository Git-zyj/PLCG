#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)27;
unsigned int var_5 = 234549217U;
short var_10 = (short)360;
int zero = 0;
unsigned long long int var_14 = 15524113135978227612ULL;
int var_15 = -1183422238;
signed char var_16 = (signed char)-50;
long long int var_17 = -1161174818435013592LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
