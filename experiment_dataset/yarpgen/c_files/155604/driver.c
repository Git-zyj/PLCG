#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36118;
unsigned short var_3 = (unsigned short)32006;
long long int var_4 = 2033573416687590291LL;
unsigned short var_5 = (unsigned short)23056;
long long int var_7 = -3845896497310669129LL;
unsigned short var_11 = (unsigned short)18480;
unsigned short var_14 = (unsigned short)9461;
long long int var_15 = 6482456876638460644LL;
long long int var_17 = -7158888490361074384LL;
int zero = 0;
long long int var_18 = 1957926680982066771LL;
long long int var_19 = -6072045822121724687LL;
long long int var_20 = 54334814850243679LL;
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
