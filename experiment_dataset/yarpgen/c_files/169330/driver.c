#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-28;
signed char var_3 = (signed char)-102;
unsigned char var_4 = (unsigned char)245;
int var_6 = -1478629775;
unsigned long long int var_7 = 813681008797100825ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)25032;
long long int var_21 = 5992137960433905663LL;
void init() {
}

void checksum() {
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
