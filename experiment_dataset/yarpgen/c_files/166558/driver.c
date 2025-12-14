#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5570229853385128975LL;
int var_2 = 1086627356;
unsigned short var_4 = (unsigned short)15910;
int var_6 = -1264862502;
unsigned char var_7 = (unsigned char)79;
unsigned long long int var_10 = 17624955890067288163ULL;
int var_12 = 732875077;
_Bool var_14 = (_Bool)0;
int var_17 = 738124242;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)84;
int var_20 = -1095776174;
unsigned char var_21 = (unsigned char)95;
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
