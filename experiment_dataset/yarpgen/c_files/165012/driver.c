#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1521710154;
unsigned char var_7 = (unsigned char)70;
int zero = 0;
unsigned char var_18 = (unsigned char)208;
unsigned int var_19 = 2899447586U;
unsigned char var_20 = (unsigned char)89;
long long int var_21 = 4652203561766065223LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
