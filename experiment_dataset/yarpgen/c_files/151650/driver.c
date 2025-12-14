#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5552614372472019144ULL;
long long int var_3 = 4249065870600974953LL;
unsigned long long int var_13 = 645830550686271634ULL;
int zero = 0;
unsigned long long int var_14 = 8785708320987952763ULL;
unsigned long long int var_15 = 13922652305700299435ULL;
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
