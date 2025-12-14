#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7791;
unsigned int var_1 = 1153818066U;
unsigned char var_2 = (unsigned char)145;
unsigned char var_3 = (unsigned char)53;
signed char var_4 = (signed char)112;
long long int var_6 = 263919212423127066LL;
short var_8 = (short)-5146;
unsigned char var_9 = (unsigned char)77;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)212;
unsigned short var_14 = (unsigned short)50742;
unsigned char var_15 = (unsigned char)26;
long long int var_16 = 7106763637467779455LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
