#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8406760160187832361LL;
unsigned char var_5 = (unsigned char)19;
signed char var_16 = (signed char)-109;
int zero = 0;
unsigned long long int var_18 = 4116171198976104047ULL;
int var_19 = 1649510001;
void init() {
}

void checksum() {
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
