#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)34380;
unsigned long long int var_9 = 11851745575519825048ULL;
unsigned short var_11 = (unsigned short)64963;
unsigned short var_17 = (unsigned short)46155;
int zero = 0;
unsigned int var_19 = 240205846U;
long long int var_20 = -2328063739853319875LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
