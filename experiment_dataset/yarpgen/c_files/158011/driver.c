#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 965987965;
unsigned short var_3 = (unsigned short)11645;
unsigned long long int var_4 = 15847658007095955479ULL;
int var_9 = 665347621;
int zero = 0;
long long int var_11 = -7785491013988454903LL;
unsigned char var_12 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
