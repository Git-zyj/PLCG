#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 897809169;
unsigned short var_1 = (unsigned short)60794;
_Bool var_11 = (_Bool)1;
short var_13 = (short)25217;
long long int var_14 = 5412870612967236614LL;
short var_15 = (short)-10262;
int zero = 0;
long long int var_19 = -7780649277383177496LL;
unsigned long long int var_20 = 2837332375690729286ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
