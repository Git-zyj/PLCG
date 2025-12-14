#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)229;
unsigned short var_5 = (unsigned short)19970;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)3;
unsigned short var_13 = (unsigned short)34854;
unsigned char var_18 = (unsigned char)133;
int zero = 0;
unsigned short var_19 = (unsigned short)15957;
long long int var_20 = -1114250087329967303LL;
int var_21 = -642471671;
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
