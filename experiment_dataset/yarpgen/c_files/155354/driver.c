#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3326316431U;
unsigned char var_2 = (unsigned char)135;
int var_3 = -1665856830;
unsigned int var_5 = 109856396U;
signed char var_6 = (signed char)97;
unsigned int var_8 = 2593851975U;
unsigned int var_9 = 1530460380U;
int var_10 = -1207144213;
signed char var_11 = (signed char)-31;
long long int var_12 = 3693697388932902716LL;
unsigned short var_13 = (unsigned short)917;
long long int var_14 = 7199296146316113397LL;
unsigned int var_16 = 47527241U;
int zero = 0;
long long int var_17 = -1635213092424113473LL;
unsigned int var_18 = 2177361526U;
long long int var_19 = -1473283273683505528LL;
void init() {
}

void checksum() {
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
