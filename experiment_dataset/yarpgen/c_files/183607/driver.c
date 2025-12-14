#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13974;
unsigned int var_3 = 201533198U;
long long int var_4 = -3120728156392465645LL;
long long int var_5 = -3765728119430517011LL;
unsigned int var_6 = 1764712322U;
long long int var_8 = -555842217283290333LL;
unsigned long long int var_14 = 4405756752601503933ULL;
signed char var_15 = (signed char)75;
int zero = 0;
long long int var_16 = 5255693133254008032LL;
signed char var_17 = (signed char)11;
unsigned int var_18 = 31914068U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
