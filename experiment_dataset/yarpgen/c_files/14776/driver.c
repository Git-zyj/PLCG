#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-6;
unsigned short var_4 = (unsigned short)36319;
unsigned short var_5 = (unsigned short)36318;
_Bool var_8 = (_Bool)0;
long long int var_10 = 195866768891085920LL;
int var_11 = 1178181546;
unsigned short var_14 = (unsigned short)19162;
signed char var_15 = (signed char)-15;
long long int var_16 = 375156543098623228LL;
int zero = 0;
unsigned short var_18 = (unsigned short)37839;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)32;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
