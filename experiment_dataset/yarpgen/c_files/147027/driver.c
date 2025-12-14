#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2333986146U;
unsigned long long int var_3 = 9291212803867368303ULL;
unsigned long long int var_7 = 11323002272496503060ULL;
unsigned short var_8 = (unsigned short)4594;
int zero = 0;
unsigned char var_12 = (unsigned char)39;
short var_13 = (short)-15794;
unsigned int var_14 = 2511933927U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
