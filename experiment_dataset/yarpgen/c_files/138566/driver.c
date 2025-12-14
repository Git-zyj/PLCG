#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3719723154597464981LL;
unsigned char var_8 = (unsigned char)63;
unsigned long long int var_9 = 6571226935138796541ULL;
signed char var_12 = (signed char)-32;
unsigned short var_14 = (unsigned short)20102;
_Bool var_15 = (_Bool)1;
unsigned long long int var_17 = 5763019993761805754ULL;
short var_18 = (short)29332;
int zero = 0;
signed char var_20 = (signed char)-126;
signed char var_21 = (signed char)-72;
short var_22 = (short)-27876;
unsigned short var_23 = (unsigned short)7588;
signed char var_24 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
