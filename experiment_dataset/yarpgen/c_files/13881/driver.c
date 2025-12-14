#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 3251744019519542649LL;
unsigned long long int var_2 = 1471448022701468427ULL;
unsigned short var_3 = (unsigned short)189;
long long int var_6 = 5948600344632579332LL;
unsigned char var_7 = (unsigned char)112;
short var_8 = (short)31874;
long long int var_9 = 3474961881643106386LL;
int zero = 0;
long long int var_10 = -8735221004684257142LL;
signed char var_11 = (signed char)(-127 - 1);
short var_12 = (short)19039;
unsigned char var_13 = (unsigned char)159;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
