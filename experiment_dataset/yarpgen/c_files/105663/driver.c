#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)123;
int var_3 = 1071600460;
short var_4 = (short)-2090;
unsigned short var_7 = (unsigned short)44562;
unsigned short var_8 = (unsigned short)15727;
signed char var_11 = (signed char)-115;
unsigned char var_15 = (unsigned char)207;
int zero = 0;
signed char var_16 = (signed char)-120;
long long int var_17 = 5527774929322333678LL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 3231003438557845262ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
