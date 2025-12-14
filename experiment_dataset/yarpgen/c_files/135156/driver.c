#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16143844778457597968ULL;
unsigned long long int var_5 = 375940949892770970ULL;
signed char var_7 = (signed char)-27;
short var_8 = (short)-8730;
short var_9 = (short)-25679;
int var_11 = -159931367;
unsigned char var_16 = (unsigned char)131;
short var_17 = (short)-10702;
int zero = 0;
unsigned long long int var_19 = 17598075228162284740ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
