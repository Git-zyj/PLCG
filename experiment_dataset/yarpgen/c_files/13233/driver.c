#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)83;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 1980025376115377434ULL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)44;
signed char var_8 = (signed char)50;
unsigned short var_9 = (unsigned short)31190;
int zero = 0;
unsigned char var_11 = (unsigned char)120;
int var_12 = 817702011;
signed char var_13 = (signed char)-113;
void init() {
}

void checksum() {
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
