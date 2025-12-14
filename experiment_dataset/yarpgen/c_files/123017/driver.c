#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21721;
unsigned long long int var_5 = 14043505448216260892ULL;
long long int var_6 = 7288214027361036475LL;
unsigned char var_9 = (unsigned char)75;
signed char var_10 = (signed char)91;
unsigned char var_11 = (unsigned char)116;
unsigned long long int var_12 = 13903970866661867323ULL;
short var_13 = (short)25080;
int zero = 0;
short var_18 = (short)4019;
unsigned long long int var_19 = 3526854058455918302ULL;
unsigned long long int var_20 = 4876726779672559364ULL;
unsigned long long int var_21 = 6692160685042145597ULL;
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
