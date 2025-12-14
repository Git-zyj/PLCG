#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32724;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-25;
int var_4 = 577444729;
short var_6 = (short)1631;
unsigned short var_7 = (unsigned short)58957;
int var_8 = -320336800;
unsigned short var_12 = (unsigned short)24029;
int zero = 0;
long long int var_15 = -2227255468175016774LL;
int var_16 = -108810952;
unsigned short var_17 = (unsigned short)38629;
long long int var_18 = 2551858650139554624LL;
int var_19 = -450528844;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
