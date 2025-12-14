#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
unsigned char var_4 = (unsigned char)47;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)83;
int zero = 0;
unsigned long long int var_15 = 8671734310137915610ULL;
short var_16 = (short)183;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
