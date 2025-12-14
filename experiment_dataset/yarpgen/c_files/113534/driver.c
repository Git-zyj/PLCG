#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12759177362394362408ULL;
unsigned char var_3 = (unsigned char)111;
signed char var_8 = (signed char)-86;
int zero = 0;
signed char var_16 = (signed char)85;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)54837;
signed char var_19 = (signed char)-96;
int var_20 = 506975842;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
