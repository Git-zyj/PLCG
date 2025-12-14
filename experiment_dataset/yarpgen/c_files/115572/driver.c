#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-45;
long long int var_9 = -5565335490086409681LL;
unsigned int var_14 = 3120424748U;
signed char var_18 = (signed char)53;
int zero = 0;
unsigned long long int var_20 = 15470517715076074666ULL;
unsigned short var_21 = (unsigned short)48602;
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
