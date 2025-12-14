#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-86;
long long int var_2 = 3950859401623552550LL;
short var_3 = (short)-24330;
unsigned long long int var_4 = 8797784386651629273ULL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)57;
unsigned long long int var_8 = 18126002567456810692ULL;
unsigned char var_11 = (unsigned char)193;
unsigned int var_12 = 1420778849U;
short var_13 = (short)-16108;
unsigned long long int var_14 = 8217606681558945711ULL;
int zero = 0;
int var_19 = -1801698617;
unsigned int var_20 = 1467160569U;
unsigned long long int var_21 = 5342662590486998846ULL;
unsigned short var_22 = (unsigned short)30859;
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
