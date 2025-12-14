#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2036871618U;
unsigned long long int var_1 = 462348973070413291ULL;
unsigned char var_2 = (unsigned char)121;
unsigned long long int var_4 = 6714027857711646345ULL;
unsigned long long int var_8 = 13552020815455055652ULL;
unsigned long long int var_10 = 6876552649517052619ULL;
int zero = 0;
unsigned int var_19 = 653331782U;
signed char var_20 = (signed char)-64;
unsigned char var_21 = (unsigned char)111;
unsigned long long int var_22 = 6719210834809575073ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
