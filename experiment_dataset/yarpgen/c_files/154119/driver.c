#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)77;
unsigned long long int var_8 = 8552390325140376361ULL;
int var_9 = 1167712981;
unsigned short var_10 = (unsigned short)51557;
int zero = 0;
short var_17 = (short)-21066;
short var_18 = (short)2325;
unsigned short var_19 = (unsigned short)21901;
long long int var_20 = -281379034648063310LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
