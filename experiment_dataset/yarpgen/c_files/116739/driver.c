#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1920855596;
short var_11 = (short)-4501;
short var_16 = (short)-8057;
unsigned long long int var_17 = 10809351518625951475ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)29712;
long long int var_20 = 8749357185852377299LL;
void init() {
}

void checksum() {
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
