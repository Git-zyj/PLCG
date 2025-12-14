#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3351370899U;
signed char var_3 = (signed char)84;
short var_8 = (short)-28530;
unsigned char var_10 = (unsigned char)74;
unsigned int var_13 = 2126780640U;
int zero = 0;
long long int var_15 = -188826518532164641LL;
signed char var_16 = (signed char)-54;
long long int var_17 = -1682267259258471046LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
