#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3955638024U;
unsigned int var_7 = 558524708U;
long long int var_8 = 9049669701260771631LL;
long long int var_17 = -1186800102171565445LL;
int zero = 0;
unsigned long long int var_18 = 15725812507965599007ULL;
unsigned char var_19 = (unsigned char)42;
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
