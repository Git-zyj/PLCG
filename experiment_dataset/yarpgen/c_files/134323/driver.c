#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-5555;
_Bool var_13 = (_Bool)0;
long long int var_14 = 5606795327657796026LL;
int zero = 0;
long long int var_15 = 5554723362399848205LL;
long long int var_16 = -3554124111627678851LL;
signed char var_17 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
