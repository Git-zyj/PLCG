#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)37;
unsigned short var_8 = (unsigned short)29658;
unsigned long long int var_9 = 6090392325380264716ULL;
int zero = 0;
long long int var_11 = 8297474539354210403LL;
unsigned long long int var_12 = 14341580404114132018ULL;
short var_13 = (short)-3810;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
