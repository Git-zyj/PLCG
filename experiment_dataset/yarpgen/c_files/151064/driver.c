#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9036400459386043585ULL;
unsigned short var_6 = (unsigned short)19308;
unsigned int var_10 = 1354942981U;
long long int var_18 = 3410368396979649726LL;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 16428336043531370980ULL;
long long int var_21 = -1851687359875246048LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
