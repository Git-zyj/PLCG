#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30508;
signed char var_1 = (signed char)47;
int var_2 = 1646615299;
unsigned long long int var_3 = 16077096669238519026ULL;
unsigned long long int var_4 = 17967131967045707171ULL;
signed char var_5 = (signed char)-90;
int var_7 = -554784733;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 4943914667631622101ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)222;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)37;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
