#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-116;
unsigned long long int var_2 = 15526187015228430356ULL;
_Bool var_6 = (_Bool)0;
long long int var_7 = 2320839246086211745LL;
unsigned short var_8 = (unsigned short)40648;
short var_11 = (short)-19171;
signed char var_14 = (signed char)44;
int zero = 0;
int var_19 = 94700352;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-24383;
int var_22 = 725802806;
signed char var_23 = (signed char)-34;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
