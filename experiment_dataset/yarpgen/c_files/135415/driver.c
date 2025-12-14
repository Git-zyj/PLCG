#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1522079752U;
signed char var_5 = (signed char)-127;
unsigned char var_6 = (unsigned char)89;
short var_8 = (short)10265;
signed char var_9 = (signed char)112;
unsigned char var_15 = (unsigned char)40;
unsigned long long int var_17 = 3160089468145178299ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)105;
long long int var_21 = -3345826830094898140LL;
void init() {
}

void checksum() {
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
