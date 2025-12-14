#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)171;
_Bool var_2 = (_Bool)1;
long long int var_3 = 3983130305237267570LL;
int var_4 = -266039072;
_Bool var_5 = (_Bool)1;
short var_6 = (short)23772;
unsigned short var_7 = (unsigned short)54664;
unsigned long long int var_8 = 7665044809569721897ULL;
unsigned short var_9 = (unsigned short)53389;
unsigned long long int var_10 = 10313541229176443101ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)35351;
long long int var_12 = -8586801284985323537LL;
int var_13 = 2136612790;
unsigned int var_14 = 3147911788U;
int var_15 = -1126129510;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
