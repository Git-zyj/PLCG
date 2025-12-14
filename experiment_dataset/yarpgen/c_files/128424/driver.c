#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 8557335992849471775LL;
int var_14 = -1988327503;
unsigned char var_15 = (unsigned char)166;
int zero = 0;
long long int var_16 = -2205738588170602929LL;
unsigned char var_17 = (unsigned char)9;
unsigned long long int var_18 = 17147594690215375372ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
