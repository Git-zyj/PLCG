#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1811330418125494670ULL;
unsigned long long int var_5 = 12467235709030775007ULL;
unsigned int var_8 = 4045871586U;
unsigned short var_11 = (unsigned short)6191;
unsigned long long int var_13 = 4165748138872927114ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 5397233263616166494ULL;
void init() {
}

void checksum() {
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
