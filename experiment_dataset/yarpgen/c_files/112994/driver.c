#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26095;
int var_3 = -1024957839;
int var_4 = -1279968372;
unsigned long long int var_5 = 17964294409158999779ULL;
unsigned char var_7 = (unsigned char)82;
int zero = 0;
unsigned long long int var_15 = 14335320807682882514ULL;
unsigned char var_16 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
