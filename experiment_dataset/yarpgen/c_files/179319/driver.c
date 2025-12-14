#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7861915730405841849LL;
signed char var_4 = (signed char)53;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 18146478862800070014ULL;
unsigned long long int var_9 = 9496218980546512304ULL;
int zero = 0;
int var_12 = 367133745;
unsigned char var_13 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
