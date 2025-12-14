#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8258876816461954140LL;
signed char var_3 = (signed char)-75;
unsigned char var_4 = (unsigned char)111;
unsigned int var_6 = 61623149U;
long long int var_7 = -9219360199829071450LL;
unsigned int var_8 = 4090575771U;
_Bool var_9 = (_Bool)1;
long long int var_11 = 5739674048918475103LL;
unsigned long long int var_13 = 13681938089508586ULL;
int zero = 0;
long long int var_14 = 3408701397856920722LL;
int var_15 = 570731453;
unsigned int var_16 = 3624959555U;
signed char var_17 = (signed char)106;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
