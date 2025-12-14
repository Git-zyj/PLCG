#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)31;
long long int var_8 = -3991361660287914443LL;
unsigned long long int var_10 = 15384587598977951166ULL;
int zero = 0;
short var_12 = (short)-25981;
long long int var_13 = 6488170563550324185LL;
signed char var_14 = (signed char)-65;
void init() {
}

void checksum() {
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
