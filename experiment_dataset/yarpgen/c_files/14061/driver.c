#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)37050;
int var_9 = -26051509;
unsigned char var_10 = (unsigned char)107;
int zero = 0;
unsigned long long int var_12 = 16924356991244247416ULL;
int var_13 = 1840652699;
long long int var_14 = -4767372989622678713LL;
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
