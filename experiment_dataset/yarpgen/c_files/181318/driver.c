#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5141640420860314316ULL;
_Bool var_6 = (_Bool)1;
int var_9 = 894773291;
int zero = 0;
int var_17 = 1012654893;
unsigned short var_18 = (unsigned short)13178;
long long int var_19 = 3994485316522461260LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
