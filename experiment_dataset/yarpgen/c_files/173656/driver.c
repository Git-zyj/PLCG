#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3491692106056412434LL;
unsigned char var_6 = (unsigned char)22;
long long int var_12 = 4088413614962277298LL;
int zero = 0;
long long int var_14 = 5190926113221560792LL;
unsigned char var_15 = (unsigned char)161;
long long int var_16 = -9016233760461914104LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
