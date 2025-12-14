#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)180;
unsigned char var_3 = (unsigned char)210;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)181;
int zero = 0;
long long int var_17 = -4395288295718770614LL;
unsigned long long int var_18 = 5274654559124603428ULL;
unsigned int var_19 = 2070374816U;
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
