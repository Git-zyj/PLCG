#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9965843042186263611ULL;
signed char var_7 = (signed char)64;
unsigned long long int var_8 = 1770466364231832372ULL;
unsigned short var_10 = (unsigned short)26547;
int zero = 0;
unsigned char var_15 = (unsigned char)226;
unsigned char var_16 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
