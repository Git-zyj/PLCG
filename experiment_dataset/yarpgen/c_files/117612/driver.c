#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)60;
unsigned long long int var_13 = 7392923120672493536ULL;
int var_19 = -1839841707;
int zero = 0;
signed char var_20 = (signed char)44;
unsigned short var_21 = (unsigned short)40747;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
