#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
unsigned char var_1 = (unsigned char)94;
short var_2 = (short)-23713;
_Bool var_3 = (_Bool)0;
unsigned char var_7 = (unsigned char)59;
int var_8 = 584532518;
signed char var_9 = (signed char)-55;
int zero = 0;
unsigned long long int var_10 = 16925595351120641352ULL;
long long int var_11 = -8571289022741217005LL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
