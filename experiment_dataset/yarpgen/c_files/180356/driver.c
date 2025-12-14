#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)135;
long long int var_8 = -8930378691522522271LL;
unsigned long long int var_9 = 6484632080081455708ULL;
int zero = 0;
signed char var_11 = (signed char)-21;
unsigned short var_12 = (unsigned short)20981;
long long int var_13 = 7967947950211907780LL;
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
