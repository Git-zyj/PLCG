#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -240507665;
unsigned long long int var_6 = 8425091622502494718ULL;
unsigned long long int var_9 = 6498278568952910061ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)58321;
unsigned char var_13 = (unsigned char)143;
unsigned long long int var_14 = 12472981417598125465ULL;
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
