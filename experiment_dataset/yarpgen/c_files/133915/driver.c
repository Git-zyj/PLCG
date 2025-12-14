#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_3 = -643937106;
unsigned int var_4 = 743809248U;
short var_6 = (short)-4777;
short var_8 = (short)27025;
short var_13 = (short)17588;
unsigned int var_14 = 2566348847U;
long long int var_15 = -4254310812042110576LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3985375945U;
unsigned short var_19 = (unsigned short)36237;
void init() {
}

void checksum() {
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
