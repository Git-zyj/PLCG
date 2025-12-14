#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 650114094;
signed char var_2 = (signed char)-115;
long long int var_7 = -970183732201373539LL;
unsigned short var_8 = (unsigned short)16567;
unsigned char var_9 = (unsigned char)46;
int var_10 = -1665849103;
unsigned long long int var_15 = 16552469491759196562ULL;
int zero = 0;
unsigned long long int var_17 = 15753397257275692854ULL;
long long int var_18 = -5827824425292298209LL;
long long int var_19 = 2731778642045303019LL;
void init() {
}

void checksum() {
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
