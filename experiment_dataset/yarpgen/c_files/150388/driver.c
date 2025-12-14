#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7533;
unsigned char var_5 = (unsigned char)161;
short var_6 = (short)25095;
int var_7 = 1586680351;
unsigned int var_8 = 1611263644U;
short var_13 = (short)-26469;
unsigned short var_14 = (unsigned short)49006;
unsigned int var_15 = 530462307U;
int zero = 0;
int var_20 = -1866620305;
short var_21 = (short)-3742;
unsigned char var_22 = (unsigned char)39;
long long int var_23 = -3404249631259773653LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
