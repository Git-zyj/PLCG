#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -748218308;
unsigned short var_5 = (unsigned short)49150;
int var_12 = -79468074;
long long int var_13 = -728657405078058975LL;
int zero = 0;
long long int var_18 = -988420122084938270LL;
unsigned short var_19 = (unsigned short)22917;
void init() {
}

void checksum() {
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
