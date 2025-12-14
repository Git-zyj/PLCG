#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15196205370784162669ULL;
long long int var_3 = 5285220621687788542LL;
unsigned long long int var_6 = 15584659196908453535ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)30851;
unsigned long long int var_9 = 15362510182257779881ULL;
unsigned short var_10 = (unsigned short)19449;
int zero = 0;
unsigned char var_12 = (unsigned char)226;
unsigned int var_13 = 1980794661U;
void init() {
}

void checksum() {
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
