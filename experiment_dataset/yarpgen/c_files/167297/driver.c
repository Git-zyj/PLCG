#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1570319386976136367LL;
unsigned long long int var_1 = 1762026583642874128ULL;
unsigned long long int var_2 = 11080917820975182235ULL;
unsigned long long int var_4 = 4328579992606027648ULL;
unsigned long long int var_7 = 6211230569217244694ULL;
unsigned long long int var_8 = 10321842696513059388ULL;
unsigned long long int var_9 = 17431804927070159176ULL;
unsigned long long int var_10 = 10703953130827732580ULL;
int zero = 0;
long long int var_11 = 3335778628010921863LL;
unsigned long long int var_12 = 17666404593819233255ULL;
long long int var_13 = 1952732836060027401LL;
long long int var_14 = 816828509635435644LL;
void init() {
}

void checksum() {
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
