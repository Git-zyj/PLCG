#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59064;
_Bool var_4 = (_Bool)0;
short var_6 = (short)13798;
unsigned long long int var_7 = 13457375129642517283ULL;
long long int var_8 = -1525409205436380530LL;
unsigned short var_9 = (unsigned short)28311;
unsigned char var_11 = (unsigned char)63;
int zero = 0;
unsigned char var_15 = (unsigned char)110;
signed char var_16 = (signed char)-39;
void init() {
}

void checksum() {
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
