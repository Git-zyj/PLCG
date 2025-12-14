#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)39155;
unsigned int var_9 = 3859288582U;
long long int var_12 = 1629764293342995989LL;
int zero = 0;
unsigned short var_14 = (unsigned short)33062;
unsigned long long int var_15 = 15623154908969809703ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
