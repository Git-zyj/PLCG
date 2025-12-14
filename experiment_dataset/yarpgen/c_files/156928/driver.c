#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)30082;
unsigned short var_3 = (unsigned short)32316;
unsigned short var_4 = (unsigned short)60000;
unsigned short var_5 = (unsigned short)57863;
_Bool var_8 = (_Bool)0;
short var_14 = (short)-3117;
int zero = 0;
unsigned short var_17 = (unsigned short)4011;
unsigned long long int var_18 = 2493063523874481814ULL;
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
