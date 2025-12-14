#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2896921033745122717LL;
long long int var_11 = 7776221316251787855LL;
long long int var_12 = -2752897584501748342LL;
long long int var_13 = 4638514704647705357LL;
long long int var_14 = -6473677350268514848LL;
long long int var_15 = -4854947201393518827LL;
int zero = 0;
long long int var_16 = 3141430245478208446LL;
long long int var_17 = 4276757865076541202LL;
long long int var_18 = -8237360063916210904LL;
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
