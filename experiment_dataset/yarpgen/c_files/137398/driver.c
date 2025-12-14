#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2543434127448193623LL;
unsigned char var_3 = (unsigned char)173;
long long int var_4 = 8190694159360821769LL;
int var_5 = -274059615;
unsigned int var_7 = 3928524560U;
long long int var_10 = 7769328028429722109LL;
int var_15 = -1263948500;
int zero = 0;
unsigned char var_18 = (unsigned char)135;
_Bool var_19 = (_Bool)1;
int var_20 = 557881228;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
