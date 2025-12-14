#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)42;
unsigned short var_9 = (unsigned short)22050;
signed char var_11 = (signed char)127;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_15 = 8627068550012904308LL;
long long int var_16 = 6295238681066445778LL;
signed char var_17 = (signed char)76;
void init() {
}

void checksum() {
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
