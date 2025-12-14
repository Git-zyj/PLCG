#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 202846900;
unsigned long long int var_5 = 6558371362596302484ULL;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int var_10 = -1007126956;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)9199;
int var_16 = 1437110055;
long long int var_17 = 851990342146597226LL;
unsigned char var_18 = (unsigned char)9;
signed char var_19 = (signed char)-116;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
