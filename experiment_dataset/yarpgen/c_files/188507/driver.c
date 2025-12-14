#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60964;
unsigned char var_1 = (unsigned char)193;
unsigned int var_2 = 1215010265U;
unsigned int var_4 = 3654849143U;
int var_6 = 783581061;
int var_11 = 1187289211;
int var_17 = 1633546941;
int zero = 0;
long long int var_19 = 8072473766115936669LL;
unsigned long long int var_20 = 13343671818686794961ULL;
long long int var_21 = 7626621677521629901LL;
unsigned int var_22 = 3562274249U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
