#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4313124263933832683LL;
short var_2 = (short)-31027;
int var_6 = 1775132181;
long long int var_7 = 4677236191422768849LL;
short var_13 = (short)9844;
short var_14 = (short)29905;
int var_18 = 1851416891;
int zero = 0;
short var_20 = (short)1855;
short var_21 = (short)23089;
short var_22 = (short)-14878;
int var_23 = -1472059299;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
