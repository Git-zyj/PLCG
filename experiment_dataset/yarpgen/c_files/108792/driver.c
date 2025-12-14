#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8851925905701403694LL;
unsigned int var_1 = 2104319830U;
signed char var_3 = (signed char)32;
unsigned short var_4 = (unsigned short)28683;
unsigned char var_7 = (unsigned char)116;
long long int var_9 = -3086276673190420774LL;
int var_10 = -88711569;
int var_11 = -734097808;
unsigned int var_12 = 2402937555U;
unsigned long long int var_15 = 2798287928040460329ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)138;
unsigned long long int var_17 = 8744260137111891623ULL;
unsigned short var_18 = (unsigned short)61069;
long long int var_19 = 7145910946281985404LL;
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
