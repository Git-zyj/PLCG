#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1745669284;
unsigned short var_2 = (unsigned short)53133;
unsigned char var_5 = (unsigned char)189;
unsigned long long int var_6 = 415048336901626249ULL;
long long int var_7 = -6188909168945554887LL;
int var_8 = -912570654;
unsigned short var_9 = (unsigned short)47062;
long long int var_11 = 9058320826090378400LL;
int zero = 0;
int var_12 = -262787085;
int var_13 = -1547530311;
int var_14 = -634624808;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
