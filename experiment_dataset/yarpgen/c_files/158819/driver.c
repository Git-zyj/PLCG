#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8255781702375855748ULL;
long long int var_4 = -5319004887874566979LL;
unsigned char var_11 = (unsigned char)98;
int zero = 0;
int var_17 = 1127580288;
unsigned char var_18 = (unsigned char)35;
short var_19 = (short)-13876;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
