#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4037485415882338990LL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 7188753755427398779ULL;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
long long int var_13 = 7697147511564501378LL;
unsigned int var_15 = 3715226687U;
unsigned long long int var_16 = 9100932991766878226ULL;
int zero = 0;
long long int var_19 = -4352869249191953221LL;
long long int var_20 = 6748111402061151024LL;
long long int var_21 = 3156683659291892793LL;
unsigned long long int var_22 = 9828152280286015168ULL;
void init() {
}

void checksum() {
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
