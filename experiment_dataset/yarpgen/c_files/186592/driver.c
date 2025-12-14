#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7547056349936559359LL;
unsigned int var_2 = 729092562U;
long long int var_6 = 6047431456039742606LL;
int var_8 = 1610398038;
unsigned short var_12 = (unsigned short)20106;
unsigned int var_14 = 942534977U;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3762116851U;
void init() {
}

void checksum() {
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
