#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -8886855958611361670LL;
long long int var_7 = -735208043231293834LL;
unsigned long long int var_9 = 3587105900376551048ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -9166081548907710634LL;
unsigned short var_12 = (unsigned short)24735;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
