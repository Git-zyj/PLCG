#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3882981263145141075ULL;
int var_3 = 425340833;
unsigned long long int var_5 = 14386452302541291526ULL;
unsigned short var_7 = (unsigned short)27847;
unsigned char var_8 = (unsigned char)164;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-105;
void init() {
}

void checksum() {
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
