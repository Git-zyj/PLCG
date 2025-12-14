#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5093760571496719159LL;
unsigned int var_9 = 4218856353U;
int var_17 = -169093454;
long long int var_18 = -5036435474786695502LL;
int zero = 0;
short var_19 = (short)-16470;
long long int var_20 = -5265421402137878248LL;
int var_21 = 339395458;
int var_22 = 211447766;
void init() {
}

void checksum() {
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
