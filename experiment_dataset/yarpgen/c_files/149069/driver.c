#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9060;
unsigned long long int var_2 = 6925346921198755555ULL;
long long int var_4 = 4953220125226253752LL;
unsigned char var_5 = (unsigned char)50;
unsigned int var_9 = 3789321620U;
_Bool var_16 = (_Bool)1;
long long int var_17 = 4627653616245999678LL;
int zero = 0;
int var_18 = -439753262;
unsigned int var_19 = 1009766238U;
short var_20 = (short)-1760;
void init() {
}

void checksum() {
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
