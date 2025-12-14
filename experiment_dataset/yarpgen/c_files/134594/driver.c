#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17147;
signed char var_1 = (signed char)103;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)25565;
_Bool var_5 = (_Bool)0;
long long int var_7 = 8399414751355819405LL;
unsigned long long int var_12 = 5881222164632182664ULL;
int zero = 0;
int var_16 = -1704278574;
_Bool var_17 = (_Bool)1;
int var_18 = 902620401;
void init() {
}

void checksum() {
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
