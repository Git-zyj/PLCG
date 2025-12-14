#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 15650194207050961530ULL;
unsigned long long int var_14 = 11420430402098789081ULL;
int zero = 0;
unsigned long long int var_18 = 12480769901712595140ULL;
long long int var_19 = 3450239043880410771LL;
signed char var_20 = (signed char)-49;
int var_21 = 594481518;
unsigned int var_22 = 3204353273U;
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
