#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3146085143843098012LL;
long long int var_4 = -1233680652346785967LL;
int var_5 = -2027106856;
signed char var_6 = (signed char)-123;
int var_8 = 605320862;
int zero = 0;
unsigned long long int var_11 = 4168850237307086823ULL;
unsigned long long int var_12 = 4208891893048160762ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
