#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5227778511990076714LL;
short var_1 = (short)-12301;
signed char var_3 = (signed char)101;
unsigned char var_5 = (unsigned char)138;
int var_10 = -1200947423;
long long int var_11 = 3873099979573197508LL;
int zero = 0;
signed char var_16 = (signed char)108;
unsigned char var_17 = (unsigned char)158;
signed char var_18 = (signed char)68;
long long int var_19 = 1680430260072476808LL;
int var_20 = 1402834316;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
