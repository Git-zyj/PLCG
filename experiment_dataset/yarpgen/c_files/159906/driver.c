#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 4759682922367721039LL;
signed char var_8 = (signed char)-103;
long long int var_9 = 4684822424377940632LL;
int zero = 0;
int var_12 = 84488660;
unsigned long long int var_13 = 17745486804761610372ULL;
void init() {
}

void checksum() {
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
