#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12218608080774030932ULL;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-3934;
unsigned char var_3 = (unsigned char)88;
short var_4 = (short)14301;
signed char var_6 = (signed char)41;
unsigned char var_9 = (unsigned char)152;
unsigned long long int var_11 = 11967489894675753072ULL;
unsigned int var_12 = 3964562824U;
int zero = 0;
unsigned int var_13 = 1213091799U;
unsigned short var_14 = (unsigned short)49349;
signed char var_15 = (signed char)94;
void init() {
}

void checksum() {
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
