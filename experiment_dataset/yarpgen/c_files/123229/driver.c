#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -422882682766279542LL;
int var_6 = -266593075;
long long int var_8 = 7303245099156926500LL;
long long int var_9 = 6190635141342744892LL;
int var_10 = 1304273999;
int zero = 0;
unsigned short var_11 = (unsigned short)23233;
unsigned short var_12 = (unsigned short)6625;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
