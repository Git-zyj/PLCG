#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4280457718434697475LL;
short var_2 = (short)-19367;
unsigned int var_3 = 1900090U;
unsigned long long int var_5 = 7864644883214490035ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)203;
unsigned short var_10 = (unsigned short)14633;
unsigned short var_11 = (unsigned short)25447;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-10502;
unsigned long long int var_14 = 4831681578081406104ULL;
int zero = 0;
long long int var_17 = 337537748578568585LL;
unsigned short var_18 = (unsigned short)7751;
short var_19 = (short)11844;
unsigned short var_20 = (unsigned short)11944;
int var_21 = -493527029;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
