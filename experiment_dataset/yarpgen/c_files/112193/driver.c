#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1051821784U;
signed char var_6 = (signed char)-75;
long long int var_10 = -7102885229907792449LL;
unsigned char var_12 = (unsigned char)86;
int zero = 0;
int var_15 = 2090676578;
short var_16 = (short)22663;
short var_17 = (short)7187;
long long int var_18 = 3707205999238839375LL;
long long int var_19 = 3187704101777145018LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
