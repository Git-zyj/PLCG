#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3870451375471895273ULL;
unsigned short var_5 = (unsigned short)16963;
unsigned char var_7 = (unsigned char)218;
unsigned short var_8 = (unsigned short)59809;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = -1124290047;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
