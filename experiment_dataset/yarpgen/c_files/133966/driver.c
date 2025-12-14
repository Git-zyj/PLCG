#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1540739070;
unsigned int var_2 = 1987148688U;
int var_3 = 723520855;
signed char var_4 = (signed char)-72;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 1687264448329244429ULL;
short var_10 = (short)26216;
short var_11 = (short)9095;
unsigned char var_13 = (unsigned char)174;
int zero = 0;
unsigned int var_14 = 3722718353U;
signed char var_15 = (signed char)-73;
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
