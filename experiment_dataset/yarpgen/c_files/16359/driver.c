#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)180;
unsigned char var_1 = (unsigned char)131;
long long int var_3 = 5268692361062970204LL;
long long int var_13 = 6369321618203611996LL;
int zero = 0;
unsigned int var_19 = 3598459011U;
int var_20 = -935271975;
unsigned short var_21 = (unsigned short)31000;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
