#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)41555;
signed char var_2 = (signed char)-70;
unsigned long long int var_3 = 13666176581908812103ULL;
unsigned short var_5 = (unsigned short)2423;
unsigned char var_7 = (unsigned char)9;
_Bool var_8 = (_Bool)0;
int var_10 = 100195598;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 16826619596664348644ULL;
int zero = 0;
signed char var_15 = (signed char)72;
int var_16 = -297990184;
long long int var_17 = 672331454172085437LL;
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
