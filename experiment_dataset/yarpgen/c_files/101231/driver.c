#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15680;
unsigned char var_2 = (unsigned char)34;
int var_4 = -224923778;
unsigned long long int var_5 = 17616970386943433372ULL;
_Bool var_8 = (_Bool)1;
int var_9 = 842052074;
long long int var_11 = 3985355702583501402LL;
unsigned char var_13 = (unsigned char)29;
int zero = 0;
long long int var_14 = -5305685160188606058LL;
unsigned long long int var_15 = 9441297089360432897ULL;
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
