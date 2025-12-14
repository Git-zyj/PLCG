#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)43013;
signed char var_6 = (signed char)-110;
unsigned long long int var_7 = 12541445957441155281ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)175;
_Bool var_10 = (_Bool)0;
long long int var_11 = 1554662276984149506LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)38330;
long long int var_18 = 5346409392160496221LL;
signed char var_19 = (signed char)87;
void init() {
}

void checksum() {
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
