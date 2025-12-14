#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16415917572916152843ULL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)46173;
unsigned short var_8 = (unsigned short)61163;
int zero = 0;
unsigned short var_11 = (unsigned short)27040;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 9963325752303636351ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 7063397320430600067ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
