#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3338069408U;
unsigned short var_2 = (unsigned short)5382;
unsigned long long int var_3 = 11185844331239000720ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_10 = 11833939962634313438ULL;
short var_11 = (short)-4198;
int zero = 0;
unsigned int var_12 = 1640994388U;
unsigned short var_13 = (unsigned short)40341;
long long int var_14 = 6678817378890625976LL;
unsigned long long int var_15 = 14419348475717387230ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
