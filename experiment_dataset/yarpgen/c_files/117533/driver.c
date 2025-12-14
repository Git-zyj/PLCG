#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2706142509U;
long long int var_2 = -7577423208812084281LL;
_Bool var_6 = (_Bool)1;
int var_12 = 1743370445;
int zero = 0;
signed char var_20 = (signed char)-29;
unsigned char var_21 = (unsigned char)145;
signed char var_22 = (signed char)-8;
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
