#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5441972214465498002LL;
long long int var_1 = 8097125474698900124LL;
long long int var_2 = -1887116283425536704LL;
_Bool var_3 = (_Bool)0;
long long int var_4 = -7459148798062581894LL;
unsigned short var_8 = (unsigned short)7215;
unsigned short var_9 = (unsigned short)24950;
int zero = 0;
long long int var_10 = 9097863587083131501LL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
