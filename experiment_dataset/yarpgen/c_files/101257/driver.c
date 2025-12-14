#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9297739888323550658ULL;
unsigned long long int var_6 = 14959442329399399401ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 4014594197634508947ULL;
unsigned long long int var_11 = 5544300171154453906ULL;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 881507892737079787ULL;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
