#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19002;
long long int var_8 = -1388658648177834353LL;
short var_11 = (short)9359;
int var_15 = -86003999;
long long int var_17 = -3284938416013787225LL;
int zero = 0;
long long int var_18 = 5059664916601531065LL;
unsigned int var_19 = 1641551482U;
long long int var_20 = -6108684346270771622LL;
unsigned short var_21 = (unsigned short)47119;
unsigned long long int var_22 = 5502450650528997872ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
