#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)15444;
short var_5 = (short)21502;
int var_6 = -1475734429;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-14;
int var_14 = 891117487;
unsigned long long int var_15 = 13043047696032713806ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
