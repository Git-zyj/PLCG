#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6719;
long long int var_10 = -9052735165817168122LL;
_Bool var_13 = (_Bool)0;
long long int var_15 = -1795633951218903309LL;
int zero = 0;
unsigned long long int var_19 = 18423431302056692659ULL;
unsigned long long int var_20 = 13734862801947486448ULL;
short var_21 = (short)-14566;
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
