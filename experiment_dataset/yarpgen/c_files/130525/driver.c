#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 100666391U;
unsigned int var_7 = 1823346503U;
unsigned int var_15 = 3283526020U;
unsigned int var_16 = 4200766448U;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -6591478799188245126LL;
unsigned long long int var_22 = 17812267029672670197ULL;
void init() {
}

void checksum() {
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
