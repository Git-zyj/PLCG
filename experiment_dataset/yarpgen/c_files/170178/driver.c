#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)2;
short var_5 = (short)-4839;
signed char var_6 = (signed char)21;
unsigned int var_7 = 1614928107U;
long long int var_9 = 6404594303938825349LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 17558718568491916997ULL;
int var_13 = -672583368;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
