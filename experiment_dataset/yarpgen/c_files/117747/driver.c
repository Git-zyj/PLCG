#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11760089883643789245ULL;
unsigned long long int var_5 = 4903904653927427691ULL;
unsigned char var_8 = (unsigned char)223;
_Bool var_10 = (_Bool)1;
long long int var_14 = -3722115104507077879LL;
unsigned long long int var_15 = 13159814890150251667ULL;
int zero = 0;
unsigned long long int var_17 = 15543568584856877663ULL;
unsigned short var_18 = (unsigned short)10696;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
