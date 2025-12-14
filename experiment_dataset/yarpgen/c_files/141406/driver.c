#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1467711172588747501LL;
long long int var_1 = 2766793554992764313LL;
long long int var_2 = 3415159019842434594LL;
long long int var_3 = -2742339646488001327LL;
long long int var_4 = 7200898060356976302LL;
long long int var_5 = -5182358857889173382LL;
long long int var_7 = 4466976246567818048LL;
long long int var_8 = 852424323375099145LL;
long long int var_10 = -6127409675823072988LL;
int zero = 0;
long long int var_14 = -1734169117719808879LL;
long long int var_15 = -4438983461730493011LL;
long long int var_16 = 6163709362633533218LL;
long long int var_17 = 3589167497085953826LL;
long long int var_18 = 3550006586669297454LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
