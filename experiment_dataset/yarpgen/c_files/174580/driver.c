#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7478717846537506310ULL;
unsigned char var_5 = (unsigned char)37;
unsigned long long int var_6 = 3655355693939017689ULL;
long long int var_7 = 398164660917406983LL;
unsigned long long int var_8 = 10592520540841249831ULL;
long long int var_9 = -8857658571084871108LL;
int zero = 0;
unsigned char var_10 = (unsigned char)68;
unsigned long long int var_11 = 649752377769369471ULL;
unsigned long long int var_12 = 11698615533838929745ULL;
unsigned long long int var_13 = 12106933274679231738ULL;
unsigned long long int var_14 = 2213335438407013931ULL;
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
