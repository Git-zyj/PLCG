#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 16924322449074267951ULL;
unsigned long long int var_7 = 10321446587719488412ULL;
unsigned long long int var_8 = 12039991706045845161ULL;
unsigned long long int var_9 = 8694875020623813842ULL;
int zero = 0;
unsigned long long int var_13 = 3491021550198702537ULL;
unsigned long long int var_14 = 9492248839264544743ULL;
unsigned long long int var_15 = 13579893974642334478ULL;
void init() {
}

void checksum() {
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
