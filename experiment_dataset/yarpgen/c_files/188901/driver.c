#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -739318450327521952LL;
long long int var_1 = 656462118774874032LL;
long long int var_3 = -3857188914256375166LL;
long long int var_5 = 2622018984458635664LL;
long long int var_7 = -980255241400408837LL;
long long int var_16 = 3182181506792268987LL;
int zero = 0;
long long int var_19 = 4603218377386594774LL;
long long int var_20 = 3707464637555710103LL;
void init() {
}

void checksum() {
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
