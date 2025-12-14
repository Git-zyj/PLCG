#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 6989917564908782377ULL;
unsigned long long int var_4 = 11495877182385311355ULL;
int var_7 = 403971580;
unsigned char var_8 = (unsigned char)202;
unsigned long long int var_10 = 4876837424821758021ULL;
int zero = 0;
int var_13 = 1981219656;
unsigned int var_14 = 444984135U;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 11752102149195821881ULL;
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
