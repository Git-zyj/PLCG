#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22051;
unsigned int var_4 = 4148607698U;
unsigned long long int var_9 = 9683542350869392501ULL;
long long int var_13 = 1299855820577325421LL;
int zero = 0;
unsigned short var_14 = (unsigned short)44801;
unsigned short var_15 = (unsigned short)56001;
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
