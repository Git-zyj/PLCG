#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7522655594142526938LL;
unsigned long long int var_1 = 15649313199347382094ULL;
unsigned char var_2 = (unsigned char)133;
int var_9 = 898886268;
int var_12 = -1023422963;
unsigned char var_17 = (unsigned char)122;
int zero = 0;
short var_18 = (short)16532;
unsigned short var_19 = (unsigned short)47119;
unsigned short var_20 = (unsigned short)29887;
signed char var_21 = (signed char)-122;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
