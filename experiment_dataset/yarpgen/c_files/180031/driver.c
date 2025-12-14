#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13911774899855820112ULL;
unsigned long long int var_2 = 17237084059302908152ULL;
long long int var_3 = -9007974638952867958LL;
long long int var_4 = 6222597829330158833LL;
long long int var_5 = 7492553017815642433LL;
unsigned long long int var_6 = 6196442598733347956ULL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -7606634149946492853LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = 1295231644371670801LL;
unsigned long long int var_12 = 13755548624086827834ULL;
unsigned long long int var_13 = 14787340540013395286ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
