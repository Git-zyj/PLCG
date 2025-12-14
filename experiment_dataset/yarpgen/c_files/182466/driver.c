#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)68;
long long int var_3 = 8667608221057135814LL;
_Bool var_4 = (_Bool)1;
long long int var_5 = 8489815843489095427LL;
unsigned long long int var_9 = 3540348392780724288ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)139;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
