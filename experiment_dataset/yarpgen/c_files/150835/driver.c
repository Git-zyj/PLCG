#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5655;
int var_3 = 125182205;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)5835;
unsigned short var_12 = (unsigned short)52216;
unsigned long long int var_13 = 3655972051961693283ULL;
int zero = 0;
short var_14 = (short)-10185;
long long int var_15 = -8436810877629568895LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
