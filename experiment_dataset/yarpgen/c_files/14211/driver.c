#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54955;
unsigned short var_2 = (unsigned short)4416;
long long int var_7 = 5490900527991084687LL;
unsigned short var_8 = (unsigned short)25219;
int zero = 0;
long long int var_12 = 3439519780818225426LL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)18079;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
