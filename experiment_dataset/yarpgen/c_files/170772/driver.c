#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15513254955489981352ULL;
unsigned int var_2 = 1009101227U;
signed char var_3 = (signed char)31;
int var_4 = -126093964;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 17312207855840037327ULL;
long long int var_7 = -3943647497441969075LL;
short var_9 = (short)-10658;
int zero = 0;
int var_10 = 1363507806;
int var_11 = -1785754599;
unsigned char var_12 = (unsigned char)106;
unsigned char var_13 = (unsigned char)237;
long long int var_14 = 2223954873541492994LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
