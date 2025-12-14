#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1184651511247041630LL;
signed char var_3 = (signed char)-90;
long long int var_4 = -6568209760624023930LL;
unsigned long long int var_7 = 4976099355251127412ULL;
int zero = 0;
long long int var_17 = 8564283075712808500LL;
int var_18 = 117873986;
void init() {
}

void checksum() {
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
