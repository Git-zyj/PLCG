#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8231120665629435414LL;
int var_5 = -2001757156;
long long int var_6 = -6723103578510119706LL;
unsigned char var_8 = (unsigned char)230;
long long int var_9 = 7034495366099492544LL;
long long int var_11 = -7872280697239592677LL;
int zero = 0;
unsigned long long int var_17 = 4962953748389313685ULL;
short var_18 = (short)-29469;
long long int var_19 = 1494643481848111642LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
