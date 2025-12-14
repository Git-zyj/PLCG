#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)44;
unsigned char var_10 = (unsigned char)16;
long long int var_19 = -8031373155334698535LL;
int zero = 0;
unsigned long long int var_20 = 17851885288338806338ULL;
signed char var_21 = (signed char)57;
int var_22 = -1895263115;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
