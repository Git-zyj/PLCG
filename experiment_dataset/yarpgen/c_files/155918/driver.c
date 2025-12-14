#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)232;
long long int var_2 = 3706716979224353042LL;
signed char var_3 = (signed char)68;
short var_5 = (short)-5587;
unsigned long long int var_16 = 11066627243123554559ULL;
int zero = 0;
unsigned long long int var_19 = 15093256765173976866ULL;
short var_20 = (short)-3758;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
