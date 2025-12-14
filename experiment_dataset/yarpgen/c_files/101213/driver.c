#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 261048964954542677LL;
unsigned long long int var_7 = 18303886048916628800ULL;
unsigned int var_10 = 2843384218U;
int zero = 0;
long long int var_11 = 1201098325972569595LL;
unsigned long long int var_12 = 11384148897847684776ULL;
short var_13 = (short)32609;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
