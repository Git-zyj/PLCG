#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22669;
signed char var_4 = (signed char)-123;
unsigned char var_8 = (unsigned char)100;
unsigned long long int var_11 = 9904971900533847751ULL;
unsigned long long int var_12 = 3705669557121868850ULL;
long long int var_13 = -6343717924607728282LL;
long long int var_14 = 1137898859735627151LL;
int zero = 0;
unsigned char var_19 = (unsigned char)86;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
