#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1418876616;
long long int var_2 = -37730142963508509LL;
int var_3 = -2065488468;
signed char var_4 = (signed char)86;
unsigned long long int var_5 = 7434667958514201818ULL;
unsigned long long int var_6 = 13986585687237861539ULL;
long long int var_7 = 280318180878013889LL;
int var_8 = 700030386;
int var_9 = -477120071;
unsigned short var_10 = (unsigned short)4242;
signed char var_11 = (signed char)-89;
signed char var_13 = (signed char)76;
int zero = 0;
signed char var_14 = (signed char)-102;
int var_15 = 906725606;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)107;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
