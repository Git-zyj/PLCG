#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27432;
long long int var_1 = -3968420550465300794LL;
short var_10 = (short)29277;
unsigned short var_13 = (unsigned short)7984;
unsigned short var_15 = (unsigned short)59148;
int zero = 0;
long long int var_16 = -4942086380110334506LL;
long long int var_17 = 5598968411500109527LL;
long long int var_18 = -335207773053885882LL;
unsigned long long int var_19 = 17394815610179202442ULL;
unsigned int var_20 = 3784112995U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
