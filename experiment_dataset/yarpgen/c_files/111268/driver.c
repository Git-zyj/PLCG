#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3512928023U;
unsigned int var_6 = 2511535200U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 7112482203064235546ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)39633;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
