#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1054232821;
unsigned char var_1 = (unsigned char)126;
short var_2 = (short)4278;
unsigned long long int var_3 = 11210526497474331098ULL;
_Bool var_6 = (_Bool)1;
long long int var_8 = 6319787595524578006LL;
unsigned char var_9 = (unsigned char)237;
int var_10 = 522743231;
int var_11 = 1983366418;
unsigned long long int var_12 = 6021736793497800605ULL;
short var_13 = (short)-5178;
int zero = 0;
signed char var_14 = (signed char)-18;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
