#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2780255282U;
short var_4 = (short)27253;
int var_9 = 224249212;
short var_13 = (short)-4610;
int var_14 = 784856125;
int zero = 0;
unsigned long long int var_17 = 3995119524799075693ULL;
unsigned int var_18 = 791117076U;
short var_19 = (short)-16529;
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
