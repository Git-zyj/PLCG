#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31617;
unsigned short var_6 = (unsigned short)45518;
long long int var_7 = 3211789617727034379LL;
long long int var_13 = 4724431256403643724LL;
int zero = 0;
short var_18 = (short)-29645;
short var_19 = (short)-11456;
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
