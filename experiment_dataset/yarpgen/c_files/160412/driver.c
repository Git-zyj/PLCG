#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11692776104591040114ULL;
unsigned int var_8 = 375632516U;
unsigned short var_9 = (unsigned short)60104;
unsigned long long int var_14 = 8237066979783492793ULL;
long long int var_15 = -1436957166537162885LL;
unsigned short var_18 = (unsigned short)5358;
int zero = 0;
short var_19 = (short)6959;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-2168;
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
