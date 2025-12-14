#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)28446;
unsigned char var_5 = (unsigned char)237;
long long int var_7 = -8661271150351658693LL;
unsigned short var_9 = (unsigned short)41112;
unsigned long long int var_14 = 15526639660123529465ULL;
unsigned char var_17 = (unsigned char)105;
int zero = 0;
int var_20 = 876559738;
unsigned long long int var_21 = 10758716595942791385ULL;
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
