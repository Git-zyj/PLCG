#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-115;
int var_2 = -1939393127;
unsigned char var_8 = (unsigned char)57;
int var_12 = 10236152;
int zero = 0;
long long int var_14 = -2979676674414569290LL;
unsigned long long int var_15 = 4698783281040369555ULL;
unsigned char var_16 = (unsigned char)103;
long long int var_17 = -2876500331277692238LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
