#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-93;
signed char var_3 = (signed char)34;
unsigned int var_5 = 2436998651U;
unsigned long long int var_6 = 5515077747932957918ULL;
unsigned char var_9 = (unsigned char)101;
long long int var_10 = -4622027488039175460LL;
int zero = 0;
unsigned char var_18 = (unsigned char)40;
_Bool var_19 = (_Bool)1;
long long int var_20 = 8045145884489245095LL;
long long int var_21 = 3523212708929111990LL;
unsigned char var_22 = (unsigned char)116;
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
