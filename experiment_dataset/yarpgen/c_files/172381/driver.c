#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1954622687036992719LL;
long long int var_1 = 1931087661527998019LL;
unsigned int var_4 = 2834228313U;
unsigned char var_5 = (unsigned char)65;
unsigned long long int var_7 = 9661347930666233586ULL;
signed char var_8 = (signed char)62;
short var_9 = (short)5069;
short var_10 = (short)21633;
unsigned short var_11 = (unsigned short)63627;
int zero = 0;
int var_12 = -395106148;
unsigned int var_13 = 2168042835U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
