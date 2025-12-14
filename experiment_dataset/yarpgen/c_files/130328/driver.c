#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28657;
unsigned char var_5 = (unsigned char)122;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)68;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-1;
int zero = 0;
long long int var_15 = -1991371617126532244LL;
unsigned short var_16 = (unsigned short)49211;
short var_17 = (short)-5415;
signed char var_18 = (signed char)-89;
void init() {
}

void checksum() {
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
