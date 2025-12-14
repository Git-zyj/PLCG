#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-34;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 6251630602772641858ULL;
unsigned short var_11 = (unsigned short)28844;
int zero = 0;
long long int var_17 = -3787260902380647396LL;
unsigned int var_18 = 1616973907U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
