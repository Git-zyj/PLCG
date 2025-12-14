#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1695259324;
unsigned short var_4 = (unsigned short)18698;
unsigned long long int var_5 = 13537720239275936592ULL;
int var_6 = -806845239;
long long int var_13 = -4665141029882494948LL;
unsigned int var_16 = 4177945477U;
_Bool var_18 = (_Bool)1;
int zero = 0;
int var_20 = -1979719353;
long long int var_21 = 3714944791914814182LL;
unsigned long long int var_22 = 2775755078050465932ULL;
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
