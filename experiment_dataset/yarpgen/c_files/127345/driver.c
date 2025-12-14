#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 981904432752805226ULL;
unsigned long long int var_10 = 13761655413466663122ULL;
int zero = 0;
unsigned long long int var_17 = 14660178880924460460ULL;
unsigned short var_18 = (unsigned short)721;
unsigned short var_19 = (unsigned short)16614;
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
