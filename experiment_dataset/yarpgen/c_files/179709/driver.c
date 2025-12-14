#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1066173573;
int var_4 = -2009566994;
int var_5 = -724383698;
signed char var_6 = (signed char)-104;
unsigned long long int var_9 = 3487861486475851870ULL;
short var_12 = (short)13827;
signed char var_13 = (signed char)112;
int var_15 = 1747352914;
signed char var_17 = (signed char)85;
int zero = 0;
unsigned long long int var_19 = 12076030597331606589ULL;
long long int var_20 = 225499329050881389LL;
short var_21 = (short)14844;
int var_22 = 1789413334;
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
