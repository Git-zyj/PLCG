#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4687221614458771381LL;
int var_4 = -1850476537;
unsigned long long int var_6 = 10457437052697736754ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)167;
unsigned char var_15 = (unsigned char)138;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 6380798192729502581ULL;
unsigned long long int var_20 = 10022263861748624969ULL;
signed char var_21 = (signed char)75;
_Bool var_22 = (_Bool)1;
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
