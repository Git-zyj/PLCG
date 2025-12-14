#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9590070193449128073ULL;
unsigned char var_3 = (unsigned char)134;
unsigned char var_6 = (unsigned char)239;
unsigned char var_7 = (unsigned char)174;
_Bool var_8 = (_Bool)0;
long long int var_9 = 7651107984475538771LL;
unsigned char var_10 = (unsigned char)164;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-44;
long long int var_20 = -6250173544619448504LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
