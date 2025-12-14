#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1764554587;
long long int var_3 = 1394861857816751983LL;
int var_5 = 492018337;
long long int var_15 = -7232013621915658419LL;
signed char var_16 = (signed char)-26;
int zero = 0;
signed char var_17 = (signed char)70;
signed char var_18 = (signed char)-49;
int var_19 = -1078120287;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
