#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -924646831;
unsigned int var_3 = 1882407021U;
unsigned short var_4 = (unsigned short)58415;
long long int var_5 = -2726528238426579541LL;
long long int var_7 = -570279621576321529LL;
unsigned long long int var_8 = 15280816442036859674ULL;
int var_9 = 296144835;
unsigned long long int var_10 = 1685344181182348520ULL;
unsigned int var_14 = 2268562241U;
int zero = 0;
unsigned char var_16 = (unsigned char)241;
unsigned short var_17 = (unsigned short)50423;
long long int var_18 = 3615922376736307517LL;
unsigned int var_19 = 172089285U;
int var_20 = -1304962013;
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
