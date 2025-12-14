#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6919895513634389723LL;
unsigned char var_2 = (unsigned char)191;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 2578956392U;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)105;
short var_8 = (short)681;
unsigned short var_11 = (unsigned short)36896;
long long int var_15 = 2856180836393165718LL;
int zero = 0;
long long int var_18 = -509531970103800368LL;
signed char var_19 = (signed char)-75;
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
