#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)43113;
unsigned long long int var_8 = 16355402702657203824ULL;
short var_10 = (short)21098;
short var_13 = (short)-4292;
unsigned long long int var_14 = 15490138512524136648ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_17 = 10008027894590139385ULL;
int var_19 = -743433389;
int zero = 0;
short var_20 = (short)-3641;
unsigned long long int var_21 = 5807780370889637758ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
