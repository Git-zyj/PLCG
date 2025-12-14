#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 906741929768006662LL;
unsigned long long int var_5 = 10652624868160724312ULL;
long long int var_9 = 6845173620572599080LL;
long long int var_15 = -2428385175716451899LL;
long long int var_17 = 3803812091667814742LL;
int zero = 0;
signed char var_18 = (signed char)-48;
long long int var_19 = -9057701360275109175LL;
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
