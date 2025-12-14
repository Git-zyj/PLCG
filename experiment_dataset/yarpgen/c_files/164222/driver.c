#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1508872597;
long long int var_1 = 3362571076093553653LL;
long long int var_2 = -3273149133644924706LL;
int var_3 = 282859265;
int var_4 = -937351671;
long long int var_5 = -4616304458173838974LL;
long long int var_6 = -2900593145827508589LL;
long long int var_7 = 2622194751739371957LL;
int var_8 = -1098381622;
long long int var_9 = 5845045250864542069LL;
int var_10 = 219942095;
long long int var_11 = 5328627561202066641LL;
int zero = 0;
int var_12 = -833508059;
int var_13 = -1432585864;
int var_14 = 795489251;
int var_15 = 2045454598;
void init() {
}

void checksum() {
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
