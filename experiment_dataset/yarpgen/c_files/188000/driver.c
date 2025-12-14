#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13672533643903187490ULL;
unsigned long long int var_1 = 10706569879515523216ULL;
int var_2 = 225967756;
long long int var_5 = -8024359849044484476LL;
short var_6 = (short)24071;
short var_7 = (short)7143;
short var_10 = (short)-5009;
unsigned char var_11 = (unsigned char)177;
unsigned long long int var_12 = 3616419429041202911ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)82;
int var_15 = 1134546914;
long long int var_16 = -3957400345378465321LL;
short var_17 = (short)8712;
unsigned short var_18 = (unsigned short)12508;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
