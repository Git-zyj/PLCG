#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2057318362U;
int var_2 = -1634684884;
unsigned long long int var_4 = 11411808448260186701ULL;
int var_10 = 424713244;
int var_13 = -1311377507;
short var_16 = (short)14710;
unsigned char var_18 = (unsigned char)181;
int zero = 0;
unsigned int var_19 = 1829470818U;
unsigned int var_20 = 898705793U;
unsigned int var_21 = 938176308U;
_Bool var_22 = (_Bool)0;
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
