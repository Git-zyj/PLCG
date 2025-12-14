#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8254856800628847617LL;
unsigned short var_5 = (unsigned short)1186;
signed char var_11 = (signed char)-47;
int zero = 0;
signed char var_13 = (signed char)-115;
signed char var_14 = (signed char)-18;
long long int var_15 = 5280232399066274619LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
