#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17963674540906305682ULL;
long long int var_7 = 3769406911419402399LL;
signed char var_19 = (signed char)76;
int zero = 0;
unsigned short var_20 = (unsigned short)45990;
unsigned short var_21 = (unsigned short)49561;
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
