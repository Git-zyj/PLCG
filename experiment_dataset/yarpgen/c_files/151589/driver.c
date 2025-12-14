#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7580135593127735276ULL;
short var_1 = (short)18420;
signed char var_2 = (signed char)114;
int var_3 = -1191268744;
unsigned char var_5 = (unsigned char)124;
unsigned short var_9 = (unsigned short)52707;
unsigned long long int var_12 = 4153153414624173007ULL;
int zero = 0;
int var_13 = -788764541;
unsigned char var_14 = (unsigned char)149;
unsigned long long int var_15 = 7666257143538512188ULL;
unsigned long long int var_16 = 10583243920330257915ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
