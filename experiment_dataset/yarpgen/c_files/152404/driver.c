#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2654269702U;
unsigned long long int var_2 = 4788797266863438151ULL;
unsigned int var_3 = 3100129708U;
long long int var_7 = -7840111544617190015LL;
int var_8 = 1229709027;
unsigned char var_12 = (unsigned char)86;
int var_13 = -568762438;
short var_15 = (short)9781;
int zero = 0;
unsigned int var_17 = 2255057929U;
unsigned long long int var_18 = 7342702673660552943ULL;
unsigned int var_19 = 1116013449U;
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
