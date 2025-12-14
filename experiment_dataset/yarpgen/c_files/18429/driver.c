#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)234;
short var_6 = (short)-25752;
int var_7 = -1282336975;
signed char var_8 = (signed char)-62;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 520871240U;
int zero = 0;
unsigned char var_12 = (unsigned char)145;
_Bool var_13 = (_Bool)0;
long long int var_14 = 2529940255914707099LL;
unsigned long long int var_15 = 1617397435780205452ULL;
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
