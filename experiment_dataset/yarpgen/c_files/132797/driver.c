#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 328803988686607985ULL;
unsigned short var_2 = (unsigned short)54753;
signed char var_4 = (signed char)-73;
unsigned char var_7 = (unsigned char)207;
signed char var_13 = (signed char)-114;
int zero = 0;
signed char var_18 = (signed char)-113;
unsigned long long int var_19 = 17103040800432244805ULL;
unsigned char var_20 = (unsigned char)130;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
