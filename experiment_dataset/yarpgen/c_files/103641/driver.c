#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3975849334U;
int var_4 = 1493585397;
unsigned long long int var_5 = 9742227754584691322ULL;
long long int var_6 = 4171159192023168090LL;
unsigned int var_7 = 1103944053U;
signed char var_13 = (signed char)-111;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)235;
int zero = 0;
unsigned char var_18 = (unsigned char)166;
unsigned int var_19 = 713429143U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
