#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-76;
long long int var_2 = 9218745120112137438LL;
signed char var_4 = (signed char)-101;
long long int var_6 = -8327748158395736248LL;
unsigned short var_7 = (unsigned short)7653;
signed char var_8 = (signed char)62;
int zero = 0;
unsigned char var_10 = (unsigned char)121;
unsigned int var_11 = 2898011597U;
signed char var_12 = (signed char)47;
signed char var_13 = (signed char)-5;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
