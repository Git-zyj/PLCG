#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)95;
signed char var_4 = (signed char)0;
unsigned int var_5 = 1527804275U;
int var_6 = 1245031454;
int var_9 = 1174876125;
unsigned short var_10 = (unsigned short)40097;
int var_14 = 1523217399;
long long int var_16 = 1952381106888711910LL;
int zero = 0;
unsigned char var_18 = (unsigned char)87;
signed char var_19 = (signed char)-120;
unsigned char var_20 = (unsigned char)55;
unsigned long long int var_21 = 6442538935368610049ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
