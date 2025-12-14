#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5877025002164823143ULL;
short var_4 = (short)13300;
unsigned char var_7 = (unsigned char)192;
int zero = 0;
unsigned long long int var_15 = 14535678217021595522ULL;
long long int var_16 = 4109831571741306666LL;
unsigned long long int var_17 = 5544636764907802944ULL;
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
