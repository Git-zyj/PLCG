#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1625401598U;
unsigned short var_1 = (unsigned short)25679;
int var_4 = 665421219;
int var_13 = -480313146;
long long int var_17 = -2831532203299283938LL;
int zero = 0;
unsigned int var_18 = 2340137943U;
unsigned int var_19 = 918652055U;
unsigned long long int var_20 = 11305817040782760202ULL;
long long int var_21 = 4609806784361334922LL;
long long int var_22 = -7694846612977372923LL;
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
