#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)26586;
signed char var_6 = (signed char)43;
long long int var_7 = 649568057889964885LL;
long long int var_12 = 1672461574217361509LL;
int zero = 0;
unsigned short var_16 = (unsigned short)48354;
long long int var_17 = 4667069044540830337LL;
long long int var_18 = 7787789480877460592LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
