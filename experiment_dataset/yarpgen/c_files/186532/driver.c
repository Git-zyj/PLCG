#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_4 = -4530023374581779192LL;
unsigned short var_8 = (unsigned short)43701;
unsigned short var_9 = (unsigned short)41936;
int zero = 0;
unsigned short var_17 = (unsigned short)32634;
unsigned char var_18 = (unsigned char)16;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
