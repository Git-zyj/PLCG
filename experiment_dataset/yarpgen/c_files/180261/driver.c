#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3100258121397183619LL;
unsigned short var_5 = (unsigned short)16963;
signed char var_8 = (signed char)-107;
int zero = 0;
unsigned short var_17 = (unsigned short)19194;
unsigned long long int var_18 = 1492863355451819198ULL;
unsigned short var_19 = (unsigned short)5799;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
