#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)50963;
unsigned char var_10 = (unsigned char)219;
unsigned short var_16 = (unsigned short)32531;
unsigned short var_17 = (unsigned short)39818;
int zero = 0;
long long int var_20 = -5069856561935914375LL;
int var_21 = 924549903;
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
