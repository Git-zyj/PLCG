#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2312279821349907929LL;
unsigned char var_3 = (unsigned char)25;
unsigned char var_4 = (unsigned char)109;
short var_8 = (short)-25078;
unsigned int var_9 = 2561028443U;
long long int var_10 = 8170479808580813117LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 8297041455276950250LL;
unsigned short var_20 = (unsigned short)27179;
_Bool var_21 = (_Bool)0;
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
