#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11672306549664526111ULL;
unsigned short var_2 = (unsigned short)28630;
signed char var_3 = (signed char)-46;
unsigned long long int var_4 = 5822414752684887572ULL;
long long int var_5 = -4394455787831525285LL;
unsigned char var_6 = (unsigned char)92;
long long int var_7 = 2690040546979406261LL;
long long int var_8 = -4017348375259475693LL;
int var_9 = -1056761680;
unsigned char var_10 = (unsigned char)68;
long long int var_12 = 9142366647411304923LL;
unsigned short var_15 = (unsigned short)6639;
unsigned long long int var_16 = 3808411255139657841ULL;
long long int var_17 = -8197804262226500686LL;
long long int var_18 = 4033615812070022304LL;
unsigned char var_19 = (unsigned char)128;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -1712085590;
long long int var_22 = -4644530605719476574LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
