#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5241098469791644094LL;
unsigned short var_4 = (unsigned short)12459;
signed char var_6 = (signed char)-45;
_Bool var_7 = (_Bool)1;
short var_9 = (short)-31442;
unsigned int var_10 = 3791785513U;
signed char var_14 = (signed char)-111;
signed char var_16 = (signed char)-92;
int zero = 0;
signed char var_18 = (signed char)97;
short var_19 = (short)25293;
long long int var_20 = 8116622355299405848LL;
void init() {
}

void checksum() {
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
