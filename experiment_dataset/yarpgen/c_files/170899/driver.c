#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18024470832177683462ULL;
unsigned char var_4 = (unsigned char)221;
unsigned long long int var_7 = 1454689752078103942ULL;
int var_11 = 724475487;
unsigned short var_14 = (unsigned short)6299;
int zero = 0;
signed char var_16 = (signed char)-54;
unsigned int var_17 = 969377255U;
long long int var_18 = 4964945420759623451LL;
int var_19 = -1848497176;
unsigned short var_20 = (unsigned short)2660;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
